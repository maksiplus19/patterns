//
// Created by viktor on 13.03.2021.
//

#ifndef PATTERNS_UBISOFTXBOXGAME_H
#define PATTERNS_UBISOFTXBOXGAME_H


#include "Game.h"
#include "../platforms/XboxGame.h"

class UbisoftXboxGame : public Game, XboxGame {
public:
    UbisoftXboxGame() : Game() {};
    std::string getXboxGameInfo() override;
};


#endif //PATTERNS_UBISOFTXBOXGAME_H
