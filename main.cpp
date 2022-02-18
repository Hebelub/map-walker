#include <iostream>
#include <fstream>
#include "GameStart/MapCreator.h"


int main()
{
    std::ifstream countries{"GameStart/countries.txt"};
    std::ifstream countryBorders{"GameStart/countryBorders.txt"};

    if (!countries.is_open() && !countryBorders.is_open())
    {
        std::cerr << "Couldn't open file(s)." << std::endl;
        std::cerr << "A: " << countries.is_open() <<
                   ", b: " << countryBorders.is_open();
        return 0;
    }


    MapCreator mapCreator;
    mapCreator.readInCountries(countries);
    mapCreator.readInCountyBorders(countryBorders);
    auto map = mapCreator.getCountries();

    {
        int i = 1;
        for (const auto& country : map)
        {
            std::cout << i++ << ": " << country->Name() << std::endl;
        }
    }

    std::cout << "Nr of countries: " << map.size() << std::endl;

    return 0;
}
