//
// Created by viktor on 12.03.2021.
//

#include "Director.h"

Director::Director(Builder *builder) : builder(builder) {}

void Director::setBuilder(Builder *_builder) {
    builder = _builder;
}

std::shared_ptr<Game> Director::getGame() {
    builder->setName();
    builder->setType();
    builder->setYear();
    return builder->getGame();
}

void Director::takeGame(Game *game) {
    builder->setGame(game);
}
