#ifndef _DECKH
#define _DECKH

#include <iostream> 
#include <vector> 
#include "card.hpp"

using namespace std;

class Deck {
    private: 
        vector<Card*> deck;
        int deckSize;
        Card* currCard;
    public: 
        Deck();
        void setDeckSize(int);
        Card* draw();
        void output_deck();
};

#endif