//
// Created by viktor on 13.03.2021.
//

#ifndef PATTERNS_UBISOFTPLAYSTATIONGAME_H
#define PATTERNS_UBISOFTPLAYSTATIONGAME_H


#include "Game.h"
#include "../platforms/PlayStationGame.h"

class UbisoftPlayStationGame: public Game, PlayStationGame {
public:
    UbisoftPlayStationGame():Game(){};
    std::string getPlaystationGameInfo() override;
};


#endif //PATTERNS_UBISOFTPLAYSTATIONGAME_H
