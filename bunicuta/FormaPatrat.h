//
// Created by alexa on 4/4/2024.
//

#ifndef POO_LAB_2023_2024_FORMAPATRAT_H
#define POO_LAB_2023_2024_FORMAPATRAT_H

#include "Forma.h"


class FormaPatrat: public Forma {
    double latura;
public:
    //constructori I (param si neparam)
    FormaPatrat();
    FormaPatrat(double inaltime, double latura);
    //destructor
    ~FormaPatrat();

    //getter si setter
    double GetLatura();
    void SetLatura(double latura);

    void Afisare();
    double CantitateGem() { return 2 * inaltime * latura * latura; }
};


#endif //POO_LAB_2023_2024_FORMAPATRAT_H
