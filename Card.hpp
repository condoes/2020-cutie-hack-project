#ifndef _DECKH
#define _DECKH

#include <string>
using namespace std;

const int size = 63;

class card {
    private:
        string face;
    public:
        card();
        ~card();
        void set_value(string);
        string get_face();
        void print();
};