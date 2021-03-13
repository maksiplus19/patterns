//
// Created by viktor on 11.03.2021.
//

#include "EaPublisher.h"
#include "../games/EaPlayStationGame.h"
#include "../games/EaXboxGame.h"
std::shared_ptr<EaPublisher> EaPublisher::instance;

EaPublisher::EaPublisher() = default;

Game EaPublisher::createPlayStationGame() {
    auto* game = new EaPlayStationGame;
    director.takeGame(game);
    game->publisher = "EA";
    return *director.getGame();
}

Game EaPublisher::createXboxGame() {
    auto *game = new EaXboxGame;
    director.takeGame(game);
    game->publisher = "EA";
    return *director.getGame();
}

EaPublisher& EaPublisher::getInstance() {
    if (instance == nullptr){
        instance.reset(new EaPublisher);
    }
    return *instance;
}


