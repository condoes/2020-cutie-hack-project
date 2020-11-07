#ifndef _DECKH
#define _DECKH

#include <iostream> 
#include <vector> 
#include "Card.hpp"

using namespace std;

class Deck {
    private: 
        vector<card> deck(62);
    public: 
        Deck();
        void shuffle();
        void draw();
        bool done();
};

#endif