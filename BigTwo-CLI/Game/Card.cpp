//
//  Card.cpp
//  BigTwo-CLI
//
//  Created by Shein Htike on 12/29/18.
//  Copyright © 2018 Shein Htike. All rights reserved.
//

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
    return !(*this < c);
};
bool Card::operator==(const Card &c) const {
    return suit == c.suit && rank == c.rank;
};

int Card::getPowerRank() const {
    int pr = rank - 2;
    if(pr <= 0)
        return pr + 13;
    else
        return pr;
}
ostream & operator<<(ostream &os, const Card& c){
    return os << "Suit: " << c.suit << endl << "Rank: " << c.rank << endl;
}
