#include <iostream>
using namespace std;
#include "BazaDanych.h"

int main(int argc, char** argv) {

    BazaDanych bazaDanych;
    ZmianaInformacjiOPociagach zmianaInformacjiOPociagach;
    ZmianaRodzajuPociagu zmianaRodzajuPociagu;
    WypisywaniePociagow wypisywaniePociagow;
    WyszukiwaniePociagu wyszukiwaniePociagu;
    FunkcjeAdministratorow funkcjeAdministratorow;

    vector<Pociag> daneOPociagach;
    vector<OpoznionyPociag> daneOOpoznionychPociagach;
    vector<OdwolanyPociag> daneOOdwolanychPociagach;
    
    /*
    bazaDanych.tworzeniePliku("BazaDanychPociagow"); // nazwy plikow:  BazaDanychPociagow, BazaDanychOpoznionychPociagow, BazaDanychOdwolanychPociagow, BazaDanychAdministratorow
    bazaDanych.tworzeniePliku("BazaDanychOpoznionychPociagow");
    bazaDanych.tworzeniePliku("BazaDanychOdwolanychPociagow");
    //bazaDanych.tworzeniePliku("BazaDanychAdministratorow");
    */

    
    bazaDanych.odczytywanieDanychPociagow();
    bazaDanych.odczytywanieDanychOpoznionychPociagow();
    bazaDanych.odczytywanieDanychOdwolanychPociagow();
    bazaDanych.odczytywanieDanychAdministratorow();
    

    //zmianaInformacjiOPociagach.dodawaniePociagu();
    //zmianaInformacjiOPociagach.dodawaniePociagu();
    //wypisywaniePociagow.wypisaniePociagow();
    //zmianaInformacjiOPociagach.dodawaniePociagu();
    //wypisywaniePociagow.wypisaniePociagow();
    //zmianaInformacjiOPociagach.zmianaDanychPociagu();
    //wypisywaniePociagow.wypisaniePociagow();

    zmianaRodzajuPociagu.tworzenieOpoznionegoPociagu(420);
    //wypisywaniePociagow.wypisaniePociagow();
    //zmianaRodzajuPociagu.tworzenieOdwolanegoPociagu(25);
    //wypisywaniePociagow.wypisaniePociagow();

    //wyszukiwaniePociagu.wyszukiwaniePoNazwie();
    //wyszukiwaniePociagu.wyszukiwaniePoNumerze();
    //wyszukiwaniePociagu.wyszukiwaniePoStacjiDocelowej();

    //funkcjeAdministratorow.dodawanieAdministratora();
    //funkcjeAdministratorow.logowanie();
    //funkcjeAdministratorow.usuwanieAdministratora();
    //funkcjeAdministratorow.wylogowanie();

    //zmianaInformacjiOPociagach.usuwaniePociagu();


    bazaDanych.zapisDanychPociagow();
    bazaDanych.zapisDanychOpoznionychPociagow();
    bazaDanych.zapisDanychOdwolanychPociagow();
    bazaDanych.zapisDanychAdministratorow();

    return 0;
}