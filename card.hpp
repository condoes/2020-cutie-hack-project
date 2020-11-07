#ifndef _CARD_H
#define _CARD_H

#include <string>
#include <iostream>
using namespace std;

const int size = 63;

class card {
    private:
        string face;
    public:
        card() {
            face = "";
        }

        void set_value(string cardType) {
            face = cardType;
        }

        string getFace() {
            return face;
        }

        void print() {
            cout << face;
        }
};

#endif
