//
// Created by viktor on 13.03.2021.
//

#include "AbstractGamePublisher.h"

void AbstractGamePublisher::setAdventureBuilder() {
    director.setBuilder(&adventureBuilder);
}

void AbstractGamePublisher::setArcadeBuilder() {
    director.setBuilder(&arcadeBuilder);
}