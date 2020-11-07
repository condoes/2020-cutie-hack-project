#include <iostream>
#include <string>
#include "deck.hpp"
#include "card.hpp"
#include "player.hpp"

using namespace std;

int main() {
    string playerName;
    Deck d;
    cout << "RULES OR SUM" << endl;

    cout << "What is your name?" << endl;
    cin >> playerName;

    Player p1(playerName);
    Player p2("Opponent");

    while (p1.getWins() != 3 && p2.getWins() !=3){
            p1.setHand(d);
            p2.setHand(d);
            //code lol
    }

    if (p1.getWins() == 3){
        cout << "Congrats! You win!" << endl;
    }
    else {
        cout << "u lost";
    }


    
    return 0;
}