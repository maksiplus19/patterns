//
// Created by viktor on 12.03.2021.
//

#ifndef PATTERNS_BUILDER_H
#define PATTERNS_BUILDER_H


#include <memory>
#include "../games/Game.h"

class Builder {
protected:
    std::shared_ptr<Game> game;
public:
    explicit Builder(Game *_game) : game(_game) {};

    virtual void setName() = 0;
    virtual void setYear() = 0;
    virtual void setType() = 0;
    void setGame(Game *game);
    std::shared_ptr<Game> getGame();
};


#endif //PATTERNS_BUILDER_H
