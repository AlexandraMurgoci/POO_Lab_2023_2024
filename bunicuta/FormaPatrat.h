//
// Created by alexa on 4/4/2024.
//

#ifndef POO_LAB_2023_2024_FORMAPATRAT_H
#define POO_LAB_2023_2024_FORMAPATRAT_H

#include "Forma.h"


class FormaPatrat: public Forma {
    double latura;
private:
    //suprascriem si, defapt, oferim implementare pentru metoda pura a bazei, astfel ca FormaPatrat nu mai este clasa abstracta si se poate instantia
    //acum se poate afla cantitatea de gem pentru o FormaPatrat, folosind implementarile din Forma si implementarea pentru AriaBazei()
    //tokenul "override" nu este necesar pentru functionarea programului, dar ajuta la documentare, este mai clar pentru programator faptul ca o metoda este suprascrisa (vezi mai jos, la Afisare nu s-a folosit)
    double AriaBazei() override;
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
};


#endif //POO_LAB_2023_2024_FORMAPATRAT_H
