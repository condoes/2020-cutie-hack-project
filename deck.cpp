#include <string>

using namespace std;

#include "deck.hpp"
#include "card.hpp"

Deck::Deck() {
    deck.resize(63);
    setDeckSize(63);

    int i = 0;
    for (i; i < 21; ++i){
        deck.at(i) = new Card("rock");
    }
    for (i; i < 42; ++i){
        deck.at(i)= new Card("paper");
    }
    for (i; i < 63; ++i){
        deck.at(i)= new Card("scissors");
    }
}
void Deck::setDeckSize(int s){
    deckSize = s;
}
void shuffle(){
    
}