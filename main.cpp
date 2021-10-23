#include <iostream>
#include <string>
#include <ctime>

#include "Container.h"

void readInputFile(char *argv[]) {
    std::cout << "Reading file...\n";
    std::ifstream input(argv[2]);
    int size;
    input >> size;
    Container container(size);
    container.inputStream(input);
    std::ofstream output(argv[3]);
    container.outputStream(output);
    container.sortContainer();
    std::ofstream sort_putput(argv[4]);
    container.outputStream(sort_putput);
}

void rndInput(char *argv[]) {
    std::cout << "Random input...\n";
    srand(static_cast<unsigned int>(time(0)));
    int size = rand() % 100;
    std::cout << "Creating container...\n";
    Container container(size);
    container.rndInput(argv[2]);
    std::ofstream output(argv[3]);
    container.outputStream(output);
    container.sortContainer();
    std::ofstream sort_putput(argv[4]);
    container.outputStream(sort_putput);
}

int main(int arcv, char *argv[]) {
    if (arcv != 5) {
        std::cout << "Error arguments. Try again.\n";
        return 1;
    }

    if (strcmp(argv[1], "-i") == 0) {
        readInputFile(argv);
    } else if (strcmp(argv[1], "-r") == 0) {
        rndInput(argv);
    }

    std::cout << "Program completed." << std::endl;
    return 0;
}
