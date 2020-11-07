#ifndef _DECKH
#define _DECKH

#include <iostream> 
#include <vector> 
#include "Card.hpp"

using namespace std;

class Deck {
    private: 
        vector<Card> deck(63);
    public: 
        Deck();
        void shuffle();
        void draw();
        bool done();
};

#endif