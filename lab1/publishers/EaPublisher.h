//
// Created by viktor on 11.03.2021.
//

#ifndef PATTERNS_EAPUBLISHER_H
#define PATTERNS_EAPUBLISHER_H


#include "AbstractGamePublisher.h"
#include "../directors_and_builders/ArcadeBuilder.h"
#include "../directors_and_builders/AdventureBuilder.h"

class EaPublisher: public AbstractGamePublisher {
private:
    static std::shared_ptr<EaPublisher> instance;

    EaPublisher();
public:
    static EaPublisher& getInstance();
    Game createPlayStationGame() override;
    Game createXboxGame() override;
};


#endif //PATTERNS_EAPUBLISHER_H
