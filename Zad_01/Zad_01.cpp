

#include <iostream>
#include <string>
#include <fstream>
#include "json.hpp"

using nlohmann::json;

int main()
{
    json j;
    j["name"] = "Magdalena";
    j["nazwisko"] = "Gibek";
    j["wiek"] = 18;
    j["happy"] = true;

    std::ofstream file("ja.jason"); 

    if (file.is_open())
    {
        std::cout << "Plik zostal otwarty: " << "ja.jason" << std::endl << std::endl;
        file << j << '\n';

        file.close();
    }
}

