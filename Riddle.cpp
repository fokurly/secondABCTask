//
// Created by buval on 19.10.2021.
//

#include "Riddle.h"
#include <fstream>

void Riddle::outputStream(std::ofstream &output) {
    output << "answer on the riddle: " << answer << "\n";
    output << "Riddle: " << string << "\n";
    output << "Meaning: " << Meaning(string) << "\n";
}
