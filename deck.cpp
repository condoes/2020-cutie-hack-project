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
    for (i = 0; i < 21; ++i) {
        deck.at(i) = new Card("rock");
    }
    for (i = 0; i < 42; ++i) {
        deck.at(i)= new Card("paper");
    }
    for (i = 0; i < 63; ++i) {
        deck.at(i)= new Card("scissors");
    }
    currCard = deck.at(62);
    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    std::shuffle(deck.begin(), deck.end(), seed);
}
void Deck::setDeckSize(int s) {
    deckSize = s;
}

Card* draw() {
    Card* temp = currCard;
    currCard--;
    return temp;
}