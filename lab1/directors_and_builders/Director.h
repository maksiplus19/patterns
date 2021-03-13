//
// Created by viktor on 12.03.2021.
//

#ifndef PATTERNS_DIRECTOR_H
#define PATTERNS_DIRECTOR_H


#include "Builder.h"

class Director {
public:
    Director() = default;

    explicit Director(Builder *builder);
    void setBuilder(Builder *_builder);
    std::shared_ptr<Game> getGame();

    void takeGame(Game *game);

private:
    Builder* builder;
};


#endif //PATTERNS_DIRECTOR_H
