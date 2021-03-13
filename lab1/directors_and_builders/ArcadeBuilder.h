//
// Created by viktor on 13.03.2021.
//

#ifndef PATTERNS_ARCADEBUILDER_H
#define PATTERNS_ARCADEBUILDER_H


#include "Builder.h"

class ArcadeBuilder: public Builder {
private:
    static int num;
public:
    ArcadeBuilder(): Builder(nullptr){};

    void setYear() override;
    void setName() override;
    void setType() override;
};


#endif //PATTERNS_ARCADEBUILDER_H
