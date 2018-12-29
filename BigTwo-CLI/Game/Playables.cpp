//
//  Playables.cpp
//  BigTwo-CLI
//
//  Created by Shein Htike on 12/29/18.
//  Copyright © 2018 Shein Htike. All rights reserved.
//

#include <Globals.h>
#include <Game/Card.hpp>
#include "Playables.hpp"

Hand::Hand(){}
Hand::Hand(vector<Card>& vec): cards{vec}{}
size_t Hand::size(){
    return cards.size();
}

bool Hand::beats(const Playable &other) const{
    return true;
}

const Card& Hand::operator[](int i) const {
    return cards[i];
}

void Hand::push_back(Card& card){
    cards.push_back(card);
}
