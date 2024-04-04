//
// Created by alexa on 4/4/2024.
//

#ifndef POO_LAB_2023_2024_FORMA_H
#define POO_LAB_2023_2024_FORMA_H

#include <iostream>


class Forma {
protected:
    double inaltime;
public:
    //constructori I (param si neparam)
    Forma();
    Forma(double inaltime);
    //destructor
    virtual ~Forma();

    //getter si setter
    double GetInaltime();
    void SetInaltime(double inaltime);

    //metode ce vor fi suprascrise (override)
    virtual void Afisare();
    //TODO implementare CantitateFrisca si CantitateGem
    virtual double CantitateFrisca() {return 0;}
    virtual double CantitateGem() {return 0;}
};


#endif //POO_LAB_2023_2024_FORMA_H
