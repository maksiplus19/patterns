//
// Created by viktor on 12.03.2021.
//

#include "Builder.h"

std::shared_ptr<Game> Builder::getGame() {
    return game;
}

void Builder::setGame(Game* _game) {
    game.reset(_game);
}
