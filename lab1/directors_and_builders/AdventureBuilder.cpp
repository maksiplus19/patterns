//
// Created by viktor on 13.03.2021.
//

#include "AdventureBuilder.h"

int AdventureBuilder::num = 1;

void AdventureBuilder::setType() {
    game->gType = "Adventure";
}

void AdventureBuilder::setName() {
    game->name = "AdventureName" + std::to_string(AdventureBuilder::num++);
}

void AdventureBuilder::setYear() {
    game->year = 2000 + rand() % 30;
}
