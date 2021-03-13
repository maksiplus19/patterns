//
// Created by viktor on 13.03.2021.
//

#ifndef PATTERNS_ADVENTUREBUILDER_H
#define PATTERNS_ADVENTUREBUILDER_H


#include "Builder.h"

class AdventureBuilder: public Builder {
private:
    static int num;
public:
    AdventureBuilder():Builder(nullptr){};

    void setType() override;
    void setName() override;
    void setYear() override;
};


#endif //PATTERNS_ADVENTUREBUILDER_H
