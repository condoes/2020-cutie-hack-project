#ifndef _CARD_H
#define _CARD_H

#include <string>
using namespace std;

const int size = 63;

class card {
    private:
        string face;
    public:
        card();
        void set_value(string);
        string getFace();
        string getCard();
        void print();
};

#endif