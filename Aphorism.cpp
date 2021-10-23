//
// Created by buval on 19.10.2021.
//

#include "Aphorism.h"
#include <fstream>

void Aphorism::outputStream(std::ofstream &output) {
    output << "aphorism author: " << author << "\n";
    output << "aphorism: " << string << "\n";
    output << "Meaning: " << Meaning(string) << "\n";
}
