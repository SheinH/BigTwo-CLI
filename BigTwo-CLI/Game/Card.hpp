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
#include <Game/Playable.hpp>

const int SUIT_MAX(4);
const int RANK_MAX(13);

class Card : public Playable{
public:
    Card(int, int);
    bool operator<(const Card& c) const;
    bool operator>(const Card& c) const;
    bool operator==(const Card& c) const;
    virtual bool beats(const Playable& other) const override;
    int getRank() const;
    int getSuit() const;

    const Card &operator[](int i) const override;

    size_t size() const override;

    const vector<Card> &getCards() const override;

private:
    int rank, suit;
    static string rankToString(int rank);
    int getPowerRank() const;
    friend ostream & operator<<(ostream &os, const Card& c);
};
#endif /* Card_hpp */
