//
//  main.cpp
//  BigTwo-CLI
//
//  Created by Shein Htike on 12/29/18.
//  Copyright © 2018 Shein Htike. All rights reserved.
//

#include <iostream>
#include "Game/Card.hpp"
#include <Game/Playable.hpp>

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    vector<Card> vec;
    vec.push_back(Card(1,10));
    vec.push_back(Card(1,1));
    vec.push_back(Card(1,3));
    vec.push_back(Card(1,2));
    sort(vec.begin(),vec.end());
    for_each(vec.begin(), vec.end(), [&](Card &c){ std::cout << c;});
    return 0;
}
