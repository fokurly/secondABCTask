//
// Created by buval on 19.10.2021.
//

#ifndef SECONDABCTASK_HOUSEOFWISDOM_H
#define SECONDABCTASK_HOUSEOFWISDOM_H

#include <iostream>
#include <string>

class HouseOfWisdom {
protected:
    std::string string;
    int Meaning(std::string string);

public:
    explicit HouseOfWisdom(std::string string);
    virtual void outputStream(std::ofstream &output) = 0;
    int getMeaning();
};


#endif //SECONDABCTASK_HOUSEOFWISDOM_H
