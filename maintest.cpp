#include <iostream>
#include <string>

#include "card.hpp"
#include "deck.hpp"

using namespace std;

int main() {
    Deck d; 

    d.output_deck();

    cout << endl << "DRAWING A CARD" << endl;
    d.draw();
    cout <<"OUTPUTTING DECK 2ND TIME" << endl;

    d.output_deck();    

    return 0;
}