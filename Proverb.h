//
// Created by buval on 19.10.2021.
//

#ifndef SECONDABCTASK_PROVERB_H
#define SECONDABCTASK_PROVERB_H

#include "HouseOfWisdom.h"

class Proverb : public HouseOfWisdom {
private:
    std::string country;

public:
    Proverb(std::string string, std::string country) : HouseOfWisdom(string) {
        this->country = country;
    }

    void outputStream(std::ofstream &output) override;
};


#endif //SECONDABCTASK_PROVERB_H
