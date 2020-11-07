#ifndef _PLAYER_HPP
#define _PLAYER_HPP

#include <iostream>
#include <vector>
#include <string>
#include "card.hpp"
#include "deck.hpp"

using namespace std;

class Player {
    private:
        int wins;
        string name;
        vector<Card*> playerHand;
    public:
        Player(string playerName) {
            wins = 0;
            name = playerName;
            playerHand.resize(5);
            for (int i = 0; i < playerHand.size(); i++) {
                playerHand.at(i) = new Card("");
            }
        }
        void setHand(Deck d) {
            for (int i = 0; i < playerHand.size(); i++) {
                playerHand.at(i) = d->getFace();
            } 
        }
        void incrementWin() {
            this->wins++;
        }
};

#endif