//
// Created by viktor on 12.03.2021.
//

#ifndef PATTERNS_GAME_H
#define PATTERNS_GAME_H


#include <string>
#include <sstream>

class Game {
public:
    std::string name;
    int year;
    std::string gType;
    std::string publisher;

    std::string getInfo() {
        std::stringstream ss;
        ss << "Name: " << name << std::endl
           << "Year: " << year << std::endl
           << "Type: " << gType << std::endl
           << "Publisher: " << publisher << std::endl;
        return ss.str();
    };
};


#endif //PATTERNS_GAME_H
