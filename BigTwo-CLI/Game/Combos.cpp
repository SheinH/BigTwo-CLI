//
// Created by Shein Htike on 2019-01-24.
//

#include "Combos.hpp"
#include "Card.hpp"


Hand::Hand(vector<Card> &v) : Combo(v) {
    if(size() != 5)
        throw "Invalid size for Hand";
}



bool Hand::beats(const Playable &other) const {
    if(other.size() != 5)
        return false;
    else
        return true;
}


Pair::Pair(vector<Card> &v) : Combo(v) {
    if(size() != 2)
        throw "Invalid size for Pair";
}

bool Pair::beats(const Playable &other) const {
    if(other.size() == 2) {
        if (cards[1] > other[1])
            return true;
    }
    return false;
}

int Straight::getHandRank() {
    return 0;
}

bool Straight::operator>(const Combo &c) const {
    if(const Straight* v = dynamic_cast<const Straight*>(&c))
}
