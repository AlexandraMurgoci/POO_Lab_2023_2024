//
// Created by alexa on 4/12/2024.
//

#ifndef POO_LAB_2023_2024_MENIUBUCATARIABUNICUTEI_H
#define POO_LAB_2023_2024_MENIUBUCATARIABUNICUTEI_H

#include <iostream>
#include <string>
#include <vector>

class MeniuBucatariaBunicutei {

    //membri statici
    static const std::string ADD;
    static const std::string REMOVE;
    static const std::string DISPLAY_ALL;
    static const std::string TOTAL;
    static const std::string STOP;
    void DisplayMenuMessage();
public:
    void RunMenu();
    //metoda statica
    static std::vector<std::string> GetAllCommands();
};


#endif //POO_LAB_2023_2024_MENIUBUCATARIABUNICUTEI_H
