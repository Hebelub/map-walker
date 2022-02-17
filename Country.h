//
// Created by glosn on 10/02/2022.
//

#ifndef MAPWALKER_COUNTRY_H
#define MAPWALKER_COUNTRY_H

#include <string>
#include <vector>

class Country {

public:
    Country(std::string name, int population, int landArea);

    [[nodiscard]] std::string Name() const;

private:
    std::string name;

    int population; // (2020)
    int landArea; // Km^2

    std::vector<Country*> adjacentTo;
};


#endif //MAPWALKER_COUNTRY_H
