//
// Created by Shein Htike on 2019-01-24.
//

#include "PlayableBuilder.hpp"

void PlayableBuilder::push_back(Card & c) {
    cards.push_back(c);
}

const vector<Card> &PlayableBuilder::getCards() const {
    return cards;
}

bool PlayableBuilder::isValid() {
    return false;
}