//
//  Playables.hpp
//  BigTwo-CLI
//
//  Created by Shein Htike on 12/29/18.
//  Copyright © 2018 Shein Htike. All rights reserved.
//

#ifndef Playables_hpp
#define Playables_hpp

#include <stdio.h>
#include <Globals.h>
#include <Game/Card.hpp>

class Card;
class Playable{
    virtual bool beats(const Playable& other) const;
};

class Hand : public Playable{
public:
    Hand();
    Hand(vector<Card>& v);
    size_t size();
    const vector<Card> getCards() const;
    const Card& operator[](int) const;
    void push_back(Card&);
    virtual bool beats(const Playable& other) const;
    virtual 
private:
    vector<Card> cards;
};
#endif /* Playables_hpp */
