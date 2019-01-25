//
// Created by Shein Htike on 2019-01-24.
//

#ifndef BIGTWO_CLI_COMBOS_HPP
#define BIGTWO_CLI_COMBOS_HPP


#include "Card.hpp"
#include "Combos.hpp"

/*
 * Hand ranks are as follows:
 * 0 = Straight
 * 1 = Flush
 * 2 = Full House
 * 3 = Bomb
 * 4 = Straight Flush
*/


class Hand : public Combo{
public:
    Hand(vector<Card> &v);
    bool beats(const Playable &other) const override;
    virtual int getHandRank() = 0;
    virtual bool operator>(const Combo& c) const = 0;
};

class Pair : public Combo {
public:
    Pair(vector<Card> &v);

    bool beats(const Playable &other) const override;
};

class Triple : public Combo {
public:
    Triple(vector<Card> &v);
};

class Straight : public Hand {
public:
    int getHandRank() override;

    bool operator>(const Combo &c) const override;
};
#endif //BIGTWO_CLI_COMBOS_HPP
