//
// Created by viktor on 11.03.2021.
//

#ifndef PATTERNS_ABSTRACTGAMEPUBLISHER_H
#define PATTERNS_ABSTRACTGAMEPUBLISHER_H


#include "../games/Game.h"
#include "../directors_and_builders/Director.h"
#include "../directors_and_builders/ArcadeBuilder.h"
#include "../directors_and_builders/AdventureBuilder.h"

class AbstractGamePublisher {
protected:
    Director director;
    ArcadeBuilder arcadeBuilder;
    AdventureBuilder adventureBuilder;
public:
    void setAdventureBuilder();
    void setArcadeBuilder();
    virtual Game createXboxGame() = 0;
    virtual Game createPlayStationGame() = 0;
};


#endif //PATTERNS_ABSTRACTGAMEPUBLISHER_H
