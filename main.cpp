#include <iostream>
#include <string>
#include "deck.hpp"
#include "card.hpp"
#include "player.hpp"

using namespace std;

int main() {
    
    int roundCount = 0;
    string playerName;
    Deck* d = new Deck();
    int discard;
    int input;

    cout << "Welcome to the Rock, Paper, Scissors Card Game! 😈" << endl;
    cout << endl << "What is your name?" << endl;
    cin >> playerName;

    Player p1(playerName);
    Player p2("Opponent 👹");

    while (p1.getWins() != 3 && p2.getWins() != 3) {
        p1.setHand(d);
        p2.setHand(d);
        
        roundCount++;
        cout << endl << "ROUND " << roundCount << endl;

        p1.output_hand();

        cout << endl << "Choose card to play (1-5)" << endl;
        cin >> input;
        cout << endl;
        srand(unsigned(time(0)));
        
        int randCard = (rand() % 5) +1;
        p1.output_card(input);
        cout << " VS ";
        p2.output_card(randCard); 
        cout << " = ";
        
        if (p1.getFace(input) == p2.getFace(randCard)) {
            int p1Num = p1.getNumof(input);
            int p2Num = p2.getNumof(randCard);

            if (p1Num > p2Num){
                cout << "OF " << p1.getFace(input) << " CARDS, " << playerName << " HAS " << p1Num 
                     << " CARDS WHILE OPPONENT HAS " << p2Num << " CARDS" << endl;
                p1.incrementWin();
                cout << playerName << " WINS👻" << endl;
            } 
            else if (p1Num < p2Num) {
                cout << "OF " << p2.getFace(input) << " CARDS, OPPONENT has " 
                    << p2Num << " CARDS WHILE " << playerName << " HAS " << p1Num << " CARDS " << endl;
                p2.incrementWin();
                cout << " OPPONENT WINS 👁👅👁" << endl;
            } 
            else {
                cout << "TIE: " << playerName << " AND OPPONENT HAVE THE SAME NUMBER OF " << p1.getFace(input) 
                    << " CARDS 🙄" << endl;
            }
        } 
        else if (p1.getFace(input) == "rock") {
            if (p2.getFace(randCard) == "scissors") {
                cout << playerName << " (ROCK🗿) WINS THIS ROUND" << endl;
                p1.incrementWin();
            }
            else {
                cout << "OPPONENT (PAPER) WINS THIS ROUND" << endl;
                p2.incrementWin();
            }
        }
        else if (p1.getFace(input) == "paper") {
            if (p2.getFace(randCard) == "rock") {
                cout << playerName << " (PAPER) WINS THIS ROUND" << endl;
                p1.incrementWin();
            }
            else {
                cout << "OPPONENT (SCISSORS) WINS THIS ROUND" << endl;
                p2.incrementWin();
            }
        }
        else if (p1.getFace(input) == "scissors") {
            if (p2.getFace(randCard) == "paper") {
                cout << playerName << " (SCISSORS) WINS THIS ROUND" << endl;
                p1.incrementWin();
            }
            else {
                cout << "OPPONENT (ROCK🗿) WINS THIS ROUND" << endl;
                p2.incrementWin();
            }
        }
    }


    cout << endl << playerName << " has ";
    p1.outputWins();
    cout << " wins" << endl;  
    cout << "Opponent has ";
    p2.outputWins();
    cout << "wins" << endl << endl;

    if (p1.getWins() == 3) {
        cout << "Congrats, " << playerName << "! You win! :D" << endl;
    }
    else {
        cout << "Sorry, you lost. :( Thanks for playing!" << endl;
    }
    
    return 0;
}