#ifndef _PLAYER_HPP
#define _PLAYER_HPP

#include <iostream>
#include <vector>
#include <string>
#include "card.hpp"

using namespace std;

class Player {
    private:
        int wins;
        vector<Card*> playerDeck;
    public:
        Player() {
            wins = 0;
       }
        
};

#endif