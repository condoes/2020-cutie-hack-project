#include <iostream>
#include <string>

#include "card.hpp"
#include "deck.hpp"
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


    p1.setHand(d);
    p1.output_hand();
    p2.setHand(d);
    p2.output_hand();
        //code lol
    
    //Deck d; 

    //d.output_deck();

    //cout << endl << "DRAWING A CARD" << endl;
    //d.draw();
    //cout <<"OUTPUTTING DECK 2ND TIME" << endl;

    //d.output_deck();    

    return 0;
}