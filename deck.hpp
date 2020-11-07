#ifndef _DECKH
#define _DECKH

#include <iostream> 
#include <vector> 
#include "Card.hpp"

using namespace std;

class Deck {
    private: 
        vector<Card> deck(62);
    public: 
        Deck();
        void shuffle();
        void draw();
        boolean done();
};



#endif