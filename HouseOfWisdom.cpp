//
// Created by buval on 19.10.2021.
//

#include "HouseOfWisdom.h"

HouseOfWisdom::HouseOfWisdom(std::string string) {
    this->string = string;
}

int HouseOfWisdom::Meaning(std::string string) {
    int count = 0;
    for (int i = 0; i < string.length(); ++i) {
        if (string[i] == '.' || string[i] == ',' || string[i] == ' ' || string[i] == '!'
        || string[i] == '-' || string[i] == ';' || string[i] == ':') {
            ++count;
        }
    }

    if (count == 0)
        return 0;

    return string.length()/count;
}

int HouseOfWisdom::getMeaning() {
    return Meaning(string);
}
