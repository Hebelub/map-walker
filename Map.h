//
// Created by glosn on 10/02/2022.
//

#ifndef MAPWALKER_MAP_H
#define MAPWALKER_MAP_H

#include <fstream>
#include "Country.h"


class Map {

public:
    void ReadCountries(std::fstream file);


    enum Link {
        WALK,
        DRIVE,
        SWIM,
        BOAT
    };

private:
    std::vector<Country*> countries;


};


#endif //MAPWALKER_MAP_H
