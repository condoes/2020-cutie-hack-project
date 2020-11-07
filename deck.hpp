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
    public: 
        Deck();
        void setDeckSize(int);
        void shuffle();
        void draw();
        bool done();
};

#endif