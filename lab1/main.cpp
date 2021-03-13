#include <iostream>
#include "publishers/AbstractGamePublisher.h"
#include "publishers/EaPublisher.h"
#include "publishers/UbisoftPublisher.h"

void createTwoGames(AbstractGamePublisher *factory){
    factory->setAdventureBuilder();
    auto game = factory->createPlayStationGame();
    std::cout << game.getInfo() << std::endl;
    factory->setArcadeBuilder();
    game = factory->createXboxGame();
    std::cout << game.getInfo() << std::endl;
}

int main() {
    createTwoGames(&EaPublisher::getInstance());
    createTwoGames(&UbisoftPublisher::getInstance());
}