//
// Created by alexa on 4/12/2024.
//

#ifndef POO_LAB_2023_2024_BUCATARIABUNICUTEI_H
#define POO_LAB_2023_2024_BUCATARIABUNICUTEI_H

#include <vector>
#include "Forma.h"


class BucatariaBunicutei {
    std::vector<Forma*> forme;
public:
    //TODO CI, CC, op=, D

    void AdaugaForma(Forma*);
    //TODO remove
    void AfiseazaToateFormele();
    double TotalGem();
    double TotalFrisca();
};


#endif //POO_LAB_2023_2024_BUCATARIABUNICUTEI_H
