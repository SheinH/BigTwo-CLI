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
public:
    virtual size_t size() const = 0;
    virtual const vector<Card>& getCards() const = 0;
    virtual bool beats(const Playable& other) const = 0;
    virtual ~Playable() = default;
    virtual const Card& operator[](int) const = 0;
};

class Combo : public Playable{
public:
    Combo(vector<Card>& v);
    size_t size() const;
    const Card& operator[](int) const;
    virtual const vector<Card> &getCards() const;
protected:
    vector<Card> cards;
};

#endif //Playables_hpp