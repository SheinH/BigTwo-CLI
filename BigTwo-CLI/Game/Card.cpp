//
//  Card.cpp
//  BigTwo-CLI
//
//  Created by Shein Htike on 12/29/18.
//  Copyright © 2018 Shein Htike. All rights reserved.
//

#include <iomanip>
#include "Card.hpp"
Card::Card(int s, int r) :
suit{s}, rank(r)
{
    
}
bool Card::operator<(const Card &c) const {
    if(rank != c.rank)
        return getPowerRank() < c.getPowerRank();
    else
        return suit < c.suit;
};
bool Card::operator>(const Card &c) const {
    if(rank != c.rank)
        return getPowerRank() > c.getPowerRank();
    else
        return suit > c.suit;
};
bool Card::operator==(const Card &c) const {
    return suit == c.suit && rank == c.rank;
};
bool Card::beats(const Playable &other) const{
    if(const Card* v = dynamic_cast<const Card*>(&other)) {
        if(rank != v->rank){
            return getPowerRank() > v -> getPowerRank();
        }
        else{
            return suit > v->suit;
        }
    }
    else return false;
}
int Card::getPowerRank() const {
    int pr = rank - 2;
    if(pr <= 0)
        return pr + 13;
    else
        return pr;
}
ostream & operator<<(ostream &os, const Card& c){
    return os << "S: " << c.suit << " R: " << setw(2) << Card::rankToString(c.rank) << endl;
}

int Card::getRank() const {
    return rank;
}

int Card::getSuit() const {
    return suit;
}

string Card::rankToString(int rank) {
    switch(rank){
        case 1:
            return "A";
        case 11:
            return "J";
        case 12:
            return "Q";
        case 13:
            return "K";
        default:
            return to_string(rank);

    }
}

size_t Card::size() const {
    return 1;
}

const vector<Card> &Card::getCards() const {
    static vector<Card> ret{*this};
    return ret;
}

const Card &Card::operator[](int i) const {
    return *this;
}

