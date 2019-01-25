//
//  Playables.cpp
//  BigTwo-CLI
//
//  Created by Shein Htike on 12/29/18.
//  Copyright © 2018 Shein Htike. All rights reserved.
//

#include <Globals.h>
#include <Game/Card.hpp>
#include "Playable.hpp"

Combo::Combo(vector<Card> &v) : cards{v} {
    sort(cards.begin(),cards.end());
}

const Card &Combo::operator[](int i) const {
    return cards[i];
}

size_t Combo::size() const{
    return 0;
}

const vector<Card> &Combo::getCards() const {
    return cards;
}
