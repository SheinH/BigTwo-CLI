//
//  Card.hpp
//  BigTwo-CLI
//
//  Created by Shein Htike on 12/29/18.
//  Copyright © 2018 Shein Htike. All rights reserved.
//

#ifndef Card_hpp
#define Card_hpp
#include <stdio.h>
#include <Globals.h>
#include <Game/Playables.hpp>

const int SUIT_MAX(4);
const int RANK_MAX(13);

class Card : public Playable{
public:
    Card(int, int);
    bool operator<(const Card& c) const;
    bool operator>(const Card& c) const;
    bool operator==(const Card& c) const;
    virtual bool beats(const Playable& other) const;
private:
    int rank, suit;
    int getPowerRank() const;
    friend ostream & operator<<(ostream &os, const Card& c);
};
#endif /* Card_hpp */
