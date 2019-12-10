// Copyright (c) 2019 Amirmahdi Mersad All rights reserved
//
// Created by Amir Mersad
// Created on September 2019
// This program checks if the entered number is the same as random number

#include <iostream>
#include <array>


template<size_t N>
float LineMaker(std::array<std::string, N> inputList) {
    // Creating the variables
    std::string line = "";
    std::string result = "";
    // Process
    for (int word : inputList) {
        line = "* ", word, " *";
        if (word == inputList.back()) {
            result += line;
        } else {
            result += line + "\n";
        }
    }
    return result;
}

main() {
    // This function checks if the entered number is the same as random number
    std::string result = "";
    std::string word = "";
    std::array<std::string, 5> inputList;

    // Process
    std::cout << "You can enter 5 words" << std::endl;
    std::cout << "if you have less than 5 words just press enter" << std::endl;
    for (int counter = 0; counter < 5; counter++) {
        std::cout << "enter a word: ";
        std::cin >> word;
        if (word == "") {}
        else {
            inputList[counter] = word;
        }
    }
    // Pass the input to another function
    result = LineMaker(inputList);
    // Output
    std::cout << "*********" << std::endl;
    std::cout << result << std::endl;
    std::cout << "*********" << std::endl;
}
