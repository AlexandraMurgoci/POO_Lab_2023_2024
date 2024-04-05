//
// Created by alexa on 4/4/2024.
//

#include "BunicutaTest.h"

void BunicutaTest::TestareMetodaBaza() {
    //vedem ca putem accesa din formaPatrat metodele publice declarate in baza
//    Forma forma;
//    forma.CantitateFrisca();
//    forma.CantitateGem();

    FormaPatrat formaPatrat;
    std::cout << formaPatrat.CantitateFrisca() << std::endl;
    std::cout << formaPatrat.CantitateGem() << std::endl;
}

void BunicutaTest::TestareOrdineConstructoriSiDestructori() {
    //remarcam ordinea in care se apeleaza mesajele pt CI si D in exemplele de mai jos (si care CI sunt folositi)
//    FormaPatrat formaPatrat;
    FormaPatrat(2,5);
}

void BunicutaTest::TestAfisare() {
    //afisarea merge as expected (cu sau fara virtual Afisare in acest exemplu)
    Forma forma(2);
    forma.Afisare();

    FormaPatrat patrat(3, 5);
    patrat.Afisare();
}

void BunicutaTest::TestUpcastingSiDowncastingPointeri() {
    //remarcam comportamentul celor de mai jos cu si fara virtual Afisare
    //fara virtual Afisare, se apeleaza metodele din baza (Forma), ci nu din FormaPatrat

    Forma *forma = new Forma(2);
    forma -> Afisare();

    //upcasting, retin o FormaPatrat intr-un pointer la Forma
    Forma *patrat = new FormaPatrat(3, 5);
    patrat -> Afisare();
    patrat -> SetInaltime(4);

    //downcasting, determin ca in pointerul la Forma este o FormaPatrat
    if(FormaPatrat * castPatrat = dynamic_cast<FormaPatrat *>(patrat)) {
        //pt info despre dynamic_cast: https://en.cppreference.com/w/cpp/language/dynamic_cast
        castPatrat -> SetLatura(6);
    }

    patrat -> Afisare();

//    delete patrat;
//    delete forma;

    //daca vrem sa memoram toate formele bunicutei (demo pentru cerinta problemei bunicuta)
    std::vector<Forma*> formeleBunicutei;
    //pt info despre vector: https://en.cppreference.com/w/cpp/container/vector
    formeleBunicutei.push_back(forma);
    formeleBunicutei.push_back(patrat);
    for(int i = 0; i < formeleBunicutei.size(); i++) {
        formeleBunicutei[i] -> Afisare();
    }

    for(int i = 0; i < formeleBunicutei.size(); i++) {
        delete formeleBunicutei[i];
    }
}

//functie ce primeste referinta la Forma, ce poate fi invocata si cu param derivate, exp FormaPatrat
void AfisareForma(Forma& forma) {
    forma.Afisare();
}
void BunicutaTest::TestUpcastingSiDowncastingReferinta() {
    //remarcam comportamentul celor de mai jos cu si fara virtual Afisare
    //fara virtual Afisare, se apeleaza metodele din baza (Forma), ci nu din FormaPatrat
    FormaPatrat formaPatrat(2,5);
    AfisareForma(formaPatrat);
}

void BunicutaTest::TestCantitateGem() {
    FormaPatrat patrat(2,5);
    std::cout << patrat.CantitateGem();
}

void BunicutaTest::Test() {
//    TestareMetodaBaza();
//    TestareOrdineConstructoriSiDestructori();
//    TestAfisare();
//    TestUpcastingSiDowncastingPointeri();
//    TestUpcastingSiDowncastingReferinta();
    TestCantitateGem();
}