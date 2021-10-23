//
// Created by buval on 19.10.2021.
//


#ifndef SECONDABCTASK_CONTAINER_H
#define SECONDABCTASK_CONTAINER_H


#include <iostream>
#include <fstream>
#include <vector>
#include <fstream>
#include <memory>
#include <utility>

#include "HouseOfWisdom.h"
#include "Riddle.h"
#include "Proverb.h"
#include "Aphorism.h"


class Container {
private:
    int size;
    std::vector<std::unique_ptr<HouseOfWisdom>> data;

public:
    Container(int size) {
        this->size = size;
    }
    ~Container();
    void inputStream(std::ifstream &input);
    void rndInput(std::string fileName);
    void outputStream(std::ofstream &output);
    void sortContainer();
};


#endif //SECONDABCTASK_CONTAINER_H
