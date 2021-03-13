//
// Created by viktor on 13.03.2021.
//

#include "ArcadeBuilder.h"
int ArcadeBuilder::num = 1;

void ArcadeBuilder::setYear() {
    game->year = 2000 + rand() % 30;
}

void ArcadeBuilder::setType() {
    game->gType="Arcade";
}

void ArcadeBuilder::setName() {
    game->name = "ArcadeName" + std::to_string(ArcadeBuilder::num++);
}
