//
// Created by buval on 19.10.2021.
//
#include "Container.h"
#include <memory>
#include <ctime>

Container::~Container() {
    this->size = 0;
    data.clear();
}

void Container::outputStream(std::ofstream &output) {
    output << "container size: " << size << "\n";
    for (int i = 0; i < size; ++i) {
        output << "----------\n";
        data[i]->outputStream(output);
    }
}

std::string getWord(std::ifstream &input, int size) {
    std::string temp = "";

    for (int i = 0; i < size; ++i) {
        input >> temp;
    }
    return temp;
}

void Container::rndInput(std::string fileName) {
    srand(static_cast<unsigned int>(time(0)));

    for (int i = 0; i < size; ++i) {
        int type = rand() % 3 + 1;
        std::string string;
        std::string mean;
        int num_of_words = rand() % 50;
        if (num_of_words == 0) {
            num_of_words = 10;
        }
        for (int j = 0; j < num_of_words; ++j) {
            std::ifstream input(fileName);
            string += getWord(input, rand() % 2184) + " ";
        }
        std::ifstream input(fileName);
        mean = getWord(input, rand() % 2184);
        if (type == 1) {
            data.push_back(std::make_unique<Riddle>(string, mean));
        } else if (type == 2) {
            data.push_back(std::make_unique<Aphorism>(string, mean));
        } else if (type == 3) {
            data.push_back(std::make_unique<Proverb>(string, mean));
        }
    }
}

void Container::inputStream(std::ifstream &input) {
    for (int i = 0; i < size; ++i) {
        int type;
        input >> type;
        std::string temp;
        std::getline(input, temp);
        std::getline(input, temp);
        std::string second_string;
        std::getline(input, second_string);
        if (type == 1) {
            data.push_back(std::make_unique<Riddle>(temp, second_string));
        } else if (type == 2) {
            data.push_back(std::make_unique<Aphorism>(temp, second_string));
        } else if (type == 3) {
            data.push_back(std::make_unique<Proverb>(temp, second_string));
        }
    }
}

void Container::sortContainer() {
    std::cout << "sorting.../\n";
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (data[j]->getMeaning() > data[j + 1]->getMeaning()) {
                std::swap(data[j], data[j+1]);
            }
        }
    }
}


