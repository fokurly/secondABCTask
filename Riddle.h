//
// Created by buval on 19.10.2021.
//

#ifndef SECONDABCTASK_RIDDLE_H
#define SECONDABCTASK_RIDDLE_H

#include "HouseOfWisdom.h"

class Riddle: public HouseOfWisdom {
    std::string answer;
public:
    Riddle(std::string string, std::string answer): HouseOfWisdom(string) {
        this->answer = answer;
    }

    void outputStream(std::ofstream & output) override;
};


#endif //SECONDABCTASK_RIDDLE_H
