//
// Created by buval on 19.10.2021.
//

#ifndef SECONDABCTASK_APHORISM_H
#define SECONDABCTASK_APHORISM_H

#include "HouseOfWisdom.h"

class Aphorism: public HouseOfWisdom{
private:
    std::string author;

public:
    Aphorism(std::string string, std::string author): HouseOfWisdom(string) {
            this->author = author;
    }
    void outputStream(std::ofstream &output) override;
};


#endif //SECONDABCTASK_APHORISM_H
