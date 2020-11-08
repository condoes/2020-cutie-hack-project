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
        void setHand(Deck* d) {
            for (int i = 0; i < playerHand.size(); i++) {
                playerHand.at(i) = d->draw();
            } 
        }
        void incrementWin() {
            this->wins++;
        }
        void outputWins() {
            cout << this->wins;
        }
        void output_hand() {
            for (int i = 0; i < 5; ++i){
                cout << "Card " << i+1 << ": ";
                playerHand.at(i)->print(); 
                cout << endl;
            }
        }
        int getWins() {
            return this->wins;
        }
        void discard(Deck* d, int n){
            Card* newCard = d->draw();
            playerHand.at(n-1) = newCard;
        }
        void output_card(int i){
            playerHand.at(i-1)->print();
        }
        string getFace(int i){
            return playerHand.at(i-1)->getFace();
        }
        int getNumof(int n){
            int numCard = 0;
            string card = playerHand.at(n-1)->getFace();
            for (int i = 0; i < 5; i++) {
                if (playerHand.at(i)->getFace() == card) {
                    numCard++;
                }
            }   
            return numCard;
        }
};

#endif