//
// Created by Shein Htike on 2019-01-24.
//

#ifndef BIGTWO_CLI_COMBOBUILDER_HPP
#define BIGTWO_CLI_COMBOBUILDER_HPP


#include "Card.hpp"

class PlayableBuilder {
public:
    void push_back(Card &);

    const vector<Card> &getCards() const;

    bool isValid();

private:
    vector<Card> cards;
};



#endif //BIGTWO_CLI_COMBOBUILDER_HPP
