#include <iostream>
#include <string>
#include <random>
#include <chrono>
#include <algorithm>

using namespace std;

#include "deck.hpp"
#include "card.hpp"

Deck::Deck() {
    deck.resize(63);
    setDeckSize(63);

    int i;
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
    //unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    //shuffle(deck.begin(), deck.end(), seed);
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