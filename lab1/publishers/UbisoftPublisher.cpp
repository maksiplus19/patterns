//
// Created by viktor on 11.03.2021.
//

#include "UbisoftPublisher.h"
#include "../games/UbisoftPlayStationGame.h"
#include "../games/UbisoftXboxGame.h"

std::shared_ptr<UbisoftPublisher> UbisoftPublisher::instance;

UbisoftPublisher::UbisoftPublisher() =default;

Game UbisoftPublisher::createPlayStationGame() {
    auto* game = new UbisoftPlayStationGame;
    director.takeGame(game);
    game->publisher = "Ubisoft";
    return *director.getGame();
}

Game UbisoftPublisher::createXboxGame() {
    auto *game = new UbisoftXboxGame;
    director.takeGame(game);
    game->publisher = "Ubisoft";
    return *director.getGame();
}

UbisoftPublisher& UbisoftPublisher::getInstance() {
    if (instance == nullptr){
        instance.reset(new UbisoftPublisher);
    }
    return *instance;
}
