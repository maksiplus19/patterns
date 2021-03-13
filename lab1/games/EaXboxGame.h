//
// Created by viktor on 13.03.2021.
//

#ifndef PATTERNS_EAXBOXGAME_H
#define PATTERNS_EAXBOXGAME_H


#include "Game.h"
#include "../platforms/XboxGame.h"

class EaXboxGame: public Game, XboxGame {
public:
    EaXboxGame() : Game(){};
    std::string getXboxGameInfo() override;
};


#endif //PATTERNS_EAXBOXGAME_H
