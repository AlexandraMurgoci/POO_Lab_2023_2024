//
// Created by alexa on 4/12/2024.
//

#ifndef POO_LAB_2023_2024_FORMADREPTUNGHI_H
#define POO_LAB_2023_2024_FORMADREPTUNGHI_H


#include "Forma.h"

class FormaDreptunghi: public Forma {
protected:
    double laturaMica;
    double laturaMare;
private:
    double AriaBazei() override;
public:
    FormaDreptunghi();
    FormaDreptunghi(double inaltime, double laturaMica, double laturaMare);
    ~FormaDreptunghi();

    double GetLaturaMica();
    double GetLaturaMare();
    void SetLaturaMica(double laturaMica);
    void SetLaturaMare(double laturaMare);

    void Afisare(std::ostream& out);
    using Forma::Afisare;

    friend std::istream& operator>>(std::istream& in, FormaDreptunghi& dreptunghi);
};


#endif //POO_LAB_2023_2024_FORMADREPTUNGHI_H
