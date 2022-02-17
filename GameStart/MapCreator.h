//
// Created by glosn on 17/02/2022.
//

#ifndef MAPWALKER_MAPCREATOR_H
#define MAPWALKER_MAPCREATOR_H
#include "../Country.h"
#include <fstream>
#include <vector>
#include <memory>


class MapCreator
{
public:
    explicit MapCreator();

    void readInCountries(std::ifstream& countries);

    [[nodiscard]] std::vector<std::shared_ptr<Country>>
    getCountries() const;

    void readInCountyBorders(std::ifstream& borders);

private:
    std::vector<std::shared_ptr<Country>> countries;

};


#endif //MAPWALKER_MAPCREATOR_H
