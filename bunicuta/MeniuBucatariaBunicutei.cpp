//
// Created by alexa on 4/12/2024.
//

#include "MeniuBucatariaBunicutei.h"

const std::string MeniuBucatariaBunicutei::ADD = "ADD";
const std::string MeniuBucatariaBunicutei::REMOVE = "REMOVE";
const std::string MeniuBucatariaBunicutei::DISPLAY_ALL = "DISPLAY_ALL";
const std::string MeniuBucatariaBunicutei::TOTAL = "TOTAL";
const std::string MeniuBucatariaBunicutei::STOP = "STOP";


void MeniuBucatariaBunicutei::DisplayMenuMessage() {
    std::cout
        << ADD << " - citeste si adauga o noua forma" << std::endl
        << REMOVE << " - sterge forma de pe pozitia x" << std::endl
        << DISPLAY_ALL << " -afiseaza toate formele din bucataria bunicutei" << std::endl
        << TOTAL << " - afiseaza cantitatile de gem si frisca necesare pentru toate formele" << std::endl
        << STOP << " - opreste programul" << std::endl
        << std::endl;
}

void MeniuBucatariaBunicutei::SetBucatarie(BucatariaBunicutei * bucatarie) {
    this -> bucatarie = bucatarie;
}

void MeniuBucatariaBunicutei::RunMenu() {
    DisplayMenuMessage();

    std::string command;
    std::cin >> command;

    while (command != STOP) {
        if(command == ADD) {
            //TODO submeniu pentru citire forma; ce forma citim?

//            bucatarie -> AdaugaForma(new FormaPatrat(2, 5));
//            bucatarie -> AdaugaForma(new FormaDreptunghi(2, 3, 5));

            FormaPatrat *patrat = new FormaPatrat;
            std::cin >> *patrat;
            bucatarie ->AdaugaForma(patrat);

            FormaDreptunghi * dreptunghi = new FormaDreptunghi;
            std::cin >> *dreptunghi;
            bucatarie ->AdaugaForma(dreptunghi);
        }
        else if(command == REMOVE) {
            //TODO
//            bucatarie -> StergeForma();
        }
        else if(command == DISPLAY_ALL) {
            bucatarie -> AfiseazaToateFormele();
            std::cout << std::endl;
        }
        else if(command == TOTAL) {
            std::cout << "Total cantitate gem: " << bucatarie -> TotalGem() << std::endl;
            std::cout << "Total cantitate frisca: " << bucatarie -> TotalFrisca() << std::endl;
        }
        else {
            std::cout << "Comanda invalida: " << command << std::endl;
        }

        DisplayMenuMessage();
        std::cin >> command;
    }
}