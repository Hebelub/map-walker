//
// Created by glosn on 17/02/2022.
//

#include "MapCreator.h"
#include <string>
#include <fstream>
#include <memory>
#include <iostream>


MapCreator::MapCreator() {

}


void
MapCreator::readInCountries(std::ifstream &countries)
{
    while (!countries.eof())
    {
        std::string name;
        countries >> name;

        countries.ignore(3);
        int population;
        countries >> population;

        countries.ignore(3);
        int landArea;
        countries >> landArea;

        this->countries.push_back(
                std::make_shared<Country>
                (Country{name, population, landArea})
        );
    }
}


std::vector<std::shared_ptr<Country>>
MapCreator::getCountries() const
{
    return countries;
}

void MapCreator::readInCountyBorders(std::ifstream& borders) {
    // TODO
}
