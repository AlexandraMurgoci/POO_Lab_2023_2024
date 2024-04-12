//
// Created by alexa on 4/12/2024.
//

#include "BucatariaBunicutei.h"

void BucatariaBunicutei::AdaugaForma(Forma* forma) {
    forme.push_back(forma);
}

void BucatariaBunicutei::AfiseazaToateFormele() {
    for(int i = 0; i < forme.size(); i++) {
        std:: cout << *forme[i];
    }
}

double BucatariaBunicutei::TotalGem() {
    double total = 0;
    for(int i = 0; i < forme.size(); i++) {
        total += forme[i]->CantitateGem();
    }
    return total;
}

double BucatariaBunicutei::TotalFrisca() {
    double total = 0;
    for(int i = 0; i < forme.size(); i++) {
        total += forme[i]->CantitateFrisca();
    }
    return total;
}