//
// Created by viktor on 13.03.2021.
//

#ifndef PATTERNS_EAPLAYSTATIONGAME_H
#define PATTERNS_EAPLAYSTATIONGAME_H


#include "Game.h"
#include "../platforms/PlayStationGame.h"

class EaPlayStationGame: public Game, PlayStationGame {
public:
    EaPlayStationGame(): Game(){};
    std::string getPlaystationGameInfo() override;
};


#endif //PATTERNS_EAPLAYSTATIONGAME_H
