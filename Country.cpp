//
// Created by glosn on 10/02/2022.
//

#include "Country.h"


Country::Country(std::string name, int population, int landArea)
    : name(std::move(name)), population(population), landArea(landArea)
{

}


std::string
Country::Name() const {
    return name;
}
