#ifndef _CARD_H
#define _CARD_H

#include <string>
#include <iostream>
using namespace std;

class Card {
    private:
        string face;
    public:
        Card(string cardtype) {
            face = cardtype;
        }
        string getFace() {
            return face;
        }
        void print() {
            cout << face;
        }
};

#endif
