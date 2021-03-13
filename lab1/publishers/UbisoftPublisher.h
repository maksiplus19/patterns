//
// Created by viktor on 11.03.2021.
//

#ifndef PATTERNS_UBISOFTPUBLISHER_H
#define PATTERNS_UBISOFTPUBLISHER_H


#include "AbstractGamePublisher.h"

class UbisoftPublisher: public AbstractGamePublisher {
private:
    static std::shared_ptr<UbisoftPublisher> instance;

    UbisoftPublisher();
public:
    static UbisoftPublisher& getInstance();
    Game createPlayStationGame() override;
    Game createXboxGame() override;
};


#endif //PATTERNS_UBISOFTPUBLISHER_H
