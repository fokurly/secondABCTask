//
// Created by buval on 19.10.2021.
//

#include "Proverb.h"
#include <fstream>

void Proverb::outputStream(std::ofstream &output) {
    output << "country of proverb: " << country << "\n";
    output << "proverb: " << string << "\n";
    output << "Meaning: " << Meaning(string) << "\n";
}
