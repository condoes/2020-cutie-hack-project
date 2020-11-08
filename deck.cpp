#include <iostream>
#include <string>
#include <random>
#include <chrono>
#include <algorithm>
#include <vector>    
#include <ctime>        
#include <cstdlib>
#include <stdio.h>

using namespace std;

#include "deck.hpp"
#include "card.hpp"

Deck::Deck() {
    deck.resize(63);
    setDeckSize(63);

    int i=0;
    for (i; i < 21; ++i) {
        deck.at(i) = new Card("rock");
    }
    for (i; i < 42; ++i) {
        deck.at(i)= new Card("paper");
    }
    for (i; i < 63; ++i) {
        deck.at(i)= new Card("scissors");
    }
    currCard = deck.at(62);
    
    srand(unsigned(time(0)));
    random_shuffle(deck.begin(), deck.end());
}
void Deck::setDeckSize(int s) {
    deckSize = s;
}

Card* Deck::draw() {
    Card* temp = currCard;
    deckSize--;
    currCard = deck.at(deckSize);
    return temp;
}

void Deck::output_deck(){
    for (int i=0; i < deckSize; ++i){
        deck.at(i)->print();
        cout << endl;
    }
}