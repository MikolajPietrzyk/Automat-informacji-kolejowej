#ifndef BAZADANYCH_H
#define BAZADANYCH_H

#include <iostream>
using namespace std;
#include <string>
#include <vector>
#include <fstream>
#include <sstream>

#pragma once

struct Pociag {
    string nazwa;
    int numerPociagu;
    string stacjaDocelowa;
    int peronOdjazdu;
    long long dataOdjazdu; // format DDMMRRRRGGMM 000000000000
    bool czyOpozniony;

    Pociag(string podstawowaNazwa = "Cug", int podstawowyNumerPociagu = 0, string podstawowaStacjaDocelowa = "RZYM", int podstawowyPeronOdjazdu = 0, long long postawowaDataOdjazdu = 000000000000, bool opozniony = false)
        : nazwa(podstawowaNazwa), numerPociagu(podstawowyNumerPociagu), stacjaDocelowa(podstawowaStacjaDocelowa), peronOdjazdu(podstawowyPeronOdjazdu), dataOdjazdu(postawowaDataOdjazdu), czyOpozniony(opozniony) {}

};

struct OpoznionyPociag {
    string nazwa;
    int numerPociagu;
    string stacjaDocelowa;
    int peronOdjazdu;
    long long dataOdjazdu; // format DDMMRRRRGGMM 000000000000
    int opoznienie;
    bool czyZmienionoPeron;
    bool czyOdwolany;

    OpoznionyPociag(string podstawowaNazwa = "Cug", int podstawowyNumerPociagu = 0, string podstawowaStacjaDocelowa = "RZYM", int podstawowyPeronOdjazdu = 0, long long postawowaDataOdjazdu = 000000000000, int postawoweOpoznienie = 10, bool zmienionoPeron = false, bool odwolany = false)
        : nazwa(podstawowaNazwa), numerPociagu(podstawowyNumerPociagu), stacjaDocelowa(podstawowaStacjaDocelowa), peronOdjazdu(podstawowyPeronOdjazdu), dataOdjazdu(postawowaDataOdjazdu), opoznienie(postawoweOpoznienie), czyZmienionoPeron(zmienionoPeron), czyOdwolany(odwolany) {}
};

struct OdwolanyPociag {
    string nazwa;
    int numerPociagu;
    string stacjaDocelowa;
    long long dataOdjazdu; // format DDMMRRRRGGMM 000000000000
    bool czyZastepczyTransport;
    string zastepczyTransport;

    OdwolanyPociag(string podstawowaNazwa = "Cug", int podstawowyNumerPociagu = 0, string podstawowaStacjaDocelowa = "RZYM", long long postawowaDataOdjazdu = 000000000000, bool boolzastepczyTransport = true, string podstawowyZastepczyTransport = "bus")
        : nazwa(podstawowaNazwa), numerPociagu(podstawowyNumerPociagu), stacjaDocelowa(podstawowaStacjaDocelowa), dataOdjazdu(postawowaDataOdjazdu), czyZastepczyTransport(boolzastepczyTransport), zastepczyTransport(podstawowyZastepczyTransport) {}
};

struct Administrator {
    string login;
    string haslo;
    bool czyZalogowano = 0;

    Administrator(string podstawowyLogin = "admin", string podstatoweHaslo = "admin", bool zalogowano = false) : login(podstawowyLogin), haslo(podstatoweHaslo), czyZalogowano(zalogowano) {}
};


extern  vector<Pociag> daneOPociagach;
extern  vector<OpoznionyPociag> daneOOpoznionychPociagach;
extern  vector<OdwolanyPociag> daneOOdwolanychPociagach;
extern  vector<Administrator> daneAdministratorow;


class PodawanieDaty {
private:
    int dzien;
    int miesiac;
    int rok;
    int godzina;
    int minuta;
    long long data;

public:
    long long zamianaFormatuDaty(string dzien, string miesiac, string rok, string godzina, string minuta) {

        data = stoi(dzien) * 10000000000;
        data += stoi(miesiac) * 100000000;
        data += stoi(rok) * 10000;
        data += stoi(godzina) * 100;
        data += stoi(minuta);

        return data;
    }

    string wypisanieDaty(long long data) {
        minuta = data % 100;
        godzina = (data / 100) % 100;
        rok = (data / 10000) % 10000;
        miesiac = (data / 100000000) % 100;
        dzien = (data / 10000000000) % 100;

        return to_string(dzien) + "." + to_string(miesiac) + "." + to_string(rok) + " o godzinie: " + to_string(godzina) + ":" + to_string(minuta);
    }

};

class BazaDanych {
private:
    string nazwaPliku;
    string linia;
    string nazwa;
    int numerPociagu;
    string stacjaDocelowa;
    int peronOdjazdu;
    long long dataOdjazdu;
    bool czyOpozniony;
    int opoznienie;
    bool czyZmienionoPeron;
    bool czyOdwolany;
    bool czyZastepczyTransport;
    string zastepczyTransport;
    string login;
    string haslo;
    bool czyZalogowano;

    PodawanieDaty podawanieDaty;

public:

    int tworzeniePliku(string nazwaPliku) {
        nazwaPliku = nazwaPliku + ".txt";
        ofstream plik(nazwaPliku);
        if (plik.is_open()) {
            cout << "Stworzono plik" << endl;
        }
        else {
            cerr << "Blad tworzenia pliku" << endl;
            return 1;
        }

        plik.close();
        return 0;
    }

    int odczytywanieDanychPociagow() {
        nazwaPliku = "BazaDanychPociagow.txt";
        ifstream plik(nazwaPliku);
        if (plik.is_open()) {
            while (getline(plik, linia)) {
                stringstream ss(linia);
                if (ss >> nazwa >> numerPociagu >> stacjaDocelowa >> peronOdjazdu >> dataOdjazdu >> czyOpozniony) {
                    daneOPociagach.push_back(Pociag(nazwa, numerPociagu, stacjaDocelowa, peronOdjazdu, dataOdjazdu, czyOpozniony));
                }
                else
                    cerr << "Blod wczytywania linijki z pliku." << endl;
            }
            cout << endl;
        }
        else {
            cerr << "Blad otwarcia pliku" << endl;
            return 1;
        }

        plik.close();
        return 0;
    }

    int odczytywanieDanychOpoznionychPociagow() {
        nazwaPliku = "BazaDanychOpoznionychPociagow.txt";
        ifstream plik(nazwaPliku);
        if (plik.is_open()) {
            while (getline(plik, linia)) {
                stringstream ss(linia);
                if (ss >> nazwa >> numerPociagu >> stacjaDocelowa >> peronOdjazdu >> dataOdjazdu >> opoznienie >> czyZmienionoPeron >> czyOdwolany) {
                    daneOOpoznionychPociagach.push_back(OpoznionyPociag(nazwa, numerPociagu, stacjaDocelowa, peronOdjazdu, dataOdjazdu, opoznienie, czyZmienionoPeron, czyOdwolany));
                }
                else
                    cerr << "Blod wczytywania linijki z pliku." << endl;
            }
            cout << endl;
        }
        else {
            cerr << "Blad otwarcia pliku" << endl;
            return 1;
        }

        plik.close();
        return 0;
    }

    int odczytywanieDanychOdwolanychPociagow() {
        nazwaPliku = "BazaDanychOdwolanychPociagow.txt";
        ifstream plik(nazwaPliku);
        if (plik.is_open()) {
            while (getline(plik, linia)) {
                stringstream ss(linia);
                if (ss >> nazwa >> numerPociagu >> stacjaDocelowa >> dataOdjazdu >> czyZastepczyTransport >> zastepczyTransport) {
                    daneOOdwolanychPociagach.push_back(OdwolanyPociag(nazwa, numerPociagu, stacjaDocelowa, dataOdjazdu, czyZastepczyTransport, zastepczyTransport));
                }
                else
                    cerr << "Blod wczytywania linijki z pliku." << endl;
            }
            cout << endl;
        }
        else {
            cerr << "Blad otwarcia pliku" << endl;
            return 1;
        }

        plik.close();
        return 0;
    }

    int odczytywanieDanychAdministratorow() {
        nazwaPliku = "BazaDanychAdministratorow.txt";
        ifstream plik(nazwaPliku);
        if (plik.is_open()) {
            while (getline(plik, linia)) {
                stringstream ss(linia);
                if (ss >> login >> haslo >> czyZalogowano) {
                    daneAdministratorow.push_back(Administrator(login, haslo, czyZalogowano));
                }
                else
                    cerr << "Blod wczytywania linijki z pliku." << endl;
            }
            cout << endl;
        }
        else {
            cerr << "Blad otwarcia pliku" << endl;
            return 1;
        }

        plik.close();
        return 0;
    }

    void odczytDanych() {
        odczytywanieDanychPociagow();
        odczytywanieDanychOpoznionychPociagow();
        odczytywanieDanychOdwolanychPociagow();
        odczytywanieDanychAdministratorow();
    }

    int zapisDanychPociagow() {
        nazwaPliku = "BazaDanychPociagow.txt";
        ofstream plik(nazwaPliku);

        for (const auto p : daneOPociagach) {
            if (plik.is_open()) {
                plik << p.nazwa << " " << p.numerPociagu << " " << p.stacjaDocelowa << " " << p.peronOdjazdu << " " << p.dataOdjazdu << " " << p.czyOpozniony << endl;
            }
            else {
                cerr << "Blad otwarcia pliku" << endl;
                return 1;
            }
        }

        plik.close();
        return 0;
    }

    int zapisDanychOpoznionychPociagow() {
        nazwaPliku = "BazaDanychOpoznionychPociagow.txt";
        ofstream plik(nazwaPliku);

        for (const auto p : daneOOpoznionychPociagach) {
            if (plik.is_open()) {
                plik << p.nazwa << " " << p.numerPociagu << " " << p.stacjaDocelowa << " " << p.peronOdjazdu << " " << p.dataOdjazdu << " " << p.opoznienie << " " << p.czyZmienionoPeron << " " << p.czyOdwolany << endl;
            }
            else {
                cerr << "Blad otwarcia pliku" << endl;
                return 1;
            }
        }

        plik.close();
        return 0;
    }

    int zapisDanychOdwolanychPociagow() {
        nazwaPliku = "BazaDanychOdwolanychPociagow.txt";
        ofstream plik(nazwaPliku);

        for (const auto p : daneOOdwolanychPociagach) {
            if (plik.is_open()) {
                plik << p.nazwa << " " << p.numerPociagu << " " << p.stacjaDocelowa << " " << p.dataOdjazdu << " " << p.czyZastepczyTransport << " " << p.zastepczyTransport << endl;
            }
            else {
                cerr << "Blad otwarcia pliku" << endl;
                return 1;
            }
        }

        plik.close();
        return 0;
    }

    int zapisDanychAdministratorow() {
        nazwaPliku = "BazaDanychAdministratorow.txt";
        ofstream plik(nazwaPliku);

        for (const auto p : daneAdministratorow) {
            if (plik.is_open()) {
                plik << p.login << " " << p.haslo << " " << p.czyZalogowano << endl;
            }
            else {
                cerr << "Blad otwarcia pliku" << endl;
                return 1;
            }
        }

        plik.close();
        return 0;
    }

    void zapisDanych() {
        zapisDanychPociagow();
        zapisDanychOpoznionychPociagow();
        zapisDanychOdwolanychPociagow();
        zapisDanychAdministratorow();
    }

};

class ZmianaInformacjiOPociagach {
private:
    string nazwa;
    int numerPociagu;
    string stacjaDocelowa;
    int peronOdjazdu;
    long long dataOdjazdu;
    int coDoZmiany;

    PodawanieDaty podawanieDaty;

public:

    void dodawaniePociagu(string nazwa, string numerPociagu, string stacjaDocelowa, string peronOdjazdu, string dzien, string miesiac, string rok, string godzina, string minuta) { // zabezpieczyc zeby tylko admin mial dostep
        
        dataOdjazdu = podawanieDaty.zamianaFormatuDaty(dzien, miesiac, rok, godzina, minuta);

        daneOPociagach.push_back(Pociag(nazwa, stoi(numerPociagu), stacjaDocelowa, stoi(peronOdjazdu), dataOdjazdu, false));
    }

    void zmianaDanychPociagu(string numerZmienianegoPociagu, string nazwa, string numerPociagu, string stacjaDocelowa, string peronOdjazdu, string dzien, string miesiac, string rok, string godzina, string minuta) {
        int i = 0;
        for (const auto p : daneOPociagach) {
            if (stoi(numerZmienianegoPociagu) == p.numerPociagu) {
                if (nazwa != "") {
                    daneOPociagach[i].nazwa = nazwa;
                }if (numerPociagu != "") {
                    daneOPociagach[i].numerPociagu = stoi(numerPociagu);
                }if (stacjaDocelowa != "") {
                    daneOPociagach[i].stacjaDocelowa = stacjaDocelowa;
                }if (peronOdjazdu != "") {
                    daneOPociagach[i].peronOdjazdu = stoi(peronOdjazdu);
                }if (dzien != "" && miesiac != "" && rok != "" && godzina != "" && minuta != "") {
                    dataOdjazdu = podawanieDaty.zamianaFormatuDaty(dzien, miesiac, rok, godzina, minuta);
                    daneOPociagach[i].dataOdjazdu = dataOdjazdu;
                }
            }
            i++;
        }

    }

    bool usuwaniePociagu(string numerPociagu) {
        int wynik = 0;
        for (int i = 0; i < daneOPociagach.size(); i++) {
            if (stoi(numerPociagu) == daneOPociagach[i].numerPociagu) {
                daneOPociagach.erase(daneOPociagach.begin() + i);
                wynik += 1;
            }
        }

        for (int i = 0; i < daneOOpoznionychPociagach.size(); i++) {
            if (stoi(numerPociagu) == daneOOpoznionychPociagach[i].numerPociagu) {
                daneOOpoznionychPociagach.erase(daneOOpoznionychPociagach.begin() + i);
                wynik += 1;
            }
        }

        for (int i = 0; i < daneOOdwolanychPociagach.size(); i++) {
            if (stoi(numerPociagu) == daneOOdwolanychPociagach[i].numerPociagu) {
                daneOOdwolanychPociagach.erase(daneOOdwolanychPociagach.begin() + i);
                wynik += 1;
            }
        }

        if (wynik > 0) {
            return true;
        }else {
            return false;
        }

    }
};

class ZmianaRodzajuPociagu {
private:
    int numerPeronu;
    int opoznienie;
    bool czyZmienionoPeron;
    bool czyZastepczyTransport;
    string zastepczyTransport;

    PodawanieDaty podawanieDaty;

public:
    bool tworzenieOpoznionegoPociagu(string numerPociagu, string opoznienie, string czyZmienionoPeron, string numerPeronu) { // podawanie numeru pociagu ktory chemy zmienic
        int i = 0;
        for (const auto p : daneOPociagach) { // dlaczemu to nie chce isc po liscie
            if (stoi(numerPociagu) == p.numerPociagu) {
                daneOPociagach[i].czyOpozniony = 1;
                if (stoi(czyZmienionoPeron) == 1) {
                    daneOOpoznionychPociagach.push_back(OpoznionyPociag(daneOPociagach[i].nazwa, daneOPociagach[i].numerPociagu, daneOPociagach[i].stacjaDocelowa, stoi(numerPeronu), daneOPociagach[i].dataOdjazdu, stoi(opoznienie), stoi(czyZmienionoPeron), 0));
                    return true;
                }
                else {
                    daneOOpoznionychPociagach.push_back(OpoznionyPociag(daneOPociagach[i].nazwa, daneOPociagach[i].numerPociagu, daneOPociagach[i].stacjaDocelowa, daneOPociagach[i].peronOdjazdu, daneOPociagach[i].dataOdjazdu, stoi(opoznienie), stoi(czyZmienionoPeron), 0));
                    return true;
                }
            }
            i++;
        }
        return false;
    }

    bool tworzenieOdwolanegoPociagu(string numerPociagu, string czyZastepczyTransport, string zastepczyTransport) { // podawanie numeru pociagu ktory chemy zmienic najpierw pociag musi byc opozniony
        int i = 0;
        for (const auto p : daneOOpoznionychPociagach) {
            if (stoi(numerPociagu) == p.numerPociagu) {
                daneOOpoznionychPociagach[i].czyOdwolany = 1;
                if (stoi(czyZastepczyTransport) == 1) {
                    daneOOdwolanychPociagach.push_back(OdwolanyPociag(daneOOpoznionychPociagach[i].nazwa, daneOOpoznionychPociagach[i].numerPociagu,  daneOOpoznionychPociagach[i].stacjaDocelowa, daneOOpoznionychPociagach[i].dataOdjazdu, stoi(czyZastepczyTransport), zastepczyTransport));
                    return true;
                }
                else {
                    daneOOdwolanychPociagach.push_back(OdwolanyPociag(daneOOpoznionychPociagach[i].nazwa, daneOOpoznionychPociagach[i].numerPociagu,  daneOOpoznionychPociagach[i].stacjaDocelowa, daneOOpoznionychPociagach[i].dataOdjazdu, stoi(czyZastepczyTransport), "brak"));
                    return true;
                }
            }
            i++;
        }
        return false;
    }
};

class WypisywaniePociagow {
private:
    PodawanieDaty podawanieDaty;

public:
    string wypisaniePociagow() {
        string koncowyString;
        int i = 0;
        for (const auto p : daneOPociagach) {
            if (daneOPociagach[i].czyOpozniony == 1) {
                koncowyString += wypisanieOpoznionegoPociagu(daneOPociagach[i].numerPociagu);
            }
            else {
                koncowyString += "Pociag o nazwie: " + daneOPociagach[i].nazwa + "      o numerze: " + to_string(daneOPociagach[i].numerPociagu) + "      do: " + daneOPociagach[i].stacjaDocelowa + "      odjedzie: ";
                koncowyString += podawanieDaty.wypisanieDaty(daneOPociagach[i].dataOdjazdu);
                koncowyString += "      z peronu: " + to_string(daneOPociagach[i].peronOdjazdu) + "\n" + "\n";
            }
            i++;
        }
        return koncowyString;
    }

    string wypisanieOpoznionegoPociagu(int numerPociagu) {
        string stringOP;
        int i = 0;
        for (const auto p : daneOOpoznionychPociagach) {
            if (numerPociagu == daneOOpoznionychPociagach[i].numerPociagu) {
                if (daneOOpoznionychPociagach[i].czyOdwolany == 1) {
                    stringOP += wypisanieOdwolanegoPociagu(daneOOpoznionychPociagach[i].numerPociagu);
                }
                else {
                    stringOP += "Pociag o nazwie: " + daneOOpoznionychPociagach[i].nazwa + "      o numerze: " + to_string(daneOOpoznionychPociagach[i].numerPociagu) + "      do: " + daneOOpoznionychPociagach[i].stacjaDocelowa + "      odjedzie: ";
                    stringOP += podawanieDaty.wypisanieDaty(daneOOpoznionychPociagach[i].dataOdjazdu);
                    stringOP += "      z opoznieniem: " + to_string(daneOOpoznionychPociagach[i].opoznienie) + "min      z peronu: " + to_string(daneOOpoznionychPociagach[i].peronOdjazdu) + "\n" + "\n";
                }
            }
            i++;
        }
        return stringOP;
    }

    string wypisanieOdwolanegoPociagu(int numerPociagu) {
        string stringOD;
        int i = 0;
        for (const auto p : daneOOdwolanychPociagach) {
            if (numerPociagu == daneOOdwolanychPociagach[i].numerPociagu) {
                if (daneOOdwolanychPociagach[i].czyZastepczyTransport == 0) {
                    stringOD += "Pociag o nazwie: " + daneOOdwolanychPociagach[i].nazwa + "      o numerze: " + to_string(daneOOdwolanychPociagach[i].numerPociagu) + "      do: " + daneOOdwolanychPociagach[i].stacjaDocelowa + "      zostal odwolany. " + "\n" + "\n";
                }
                else {
                    stringOD += "Pociag o nazwie: " + daneOOdwolanychPociagach[i].nazwa + "      o numerze: " + to_string(daneOOdwolanychPociagach[i].numerPociagu) + "      do: " + daneOOdwolanychPociagach[i].stacjaDocelowa + "      ma zastepczy transport: " + daneOOdwolanychPociagach[i].zastepczyTransport + "      data: ";
                    stringOD += podawanieDaty.wypisanieDaty(daneOOdwolanychPociagach[i].dataOdjazdu) + "\n" + "\n";
                }
            }
            i++;
        }
        return stringOD;
    }
};

class WyszukiwaniePociagu {
private:
    int numer;
    PodawanieDaty podawanieDaty;
    long long data;
    long long data2Pociagu;

public:

    string wyszukiwaniePoNazwie(string nazwa) {
        string odpowiedz;

        int i = 0;
        for (const auto p : daneOPociagach) {
            if (nazwa == daneOPociagach[i].nazwa) {
                odpowiedz += "Pociag o nazwie: " + daneOPociagach[i].nazwa + "      o numerze: " + to_string(daneOPociagach[i].numerPociagu) + "        do: " + daneOPociagach[i].stacjaDocelowa + "        odjedzie: ";
                odpowiedz += podawanieDaty.wypisanieDaty(daneOPociagach[i].dataOdjazdu);
                odpowiedz += "      z peronu: " + to_string(daneOPociagach[i].peronOdjazdu) + "\n";
                return odpowiedz;
            }
            i++;
        }
        odpowiedz = "B³êdna nazwa. Poci¹g o takiej nazwie nie istnieje. ";
        return odpowiedz;
    }

    string wyszukiwaniePoNumerze(string numer) {
        string odpowiedz;

        int i = 0;
        for (const auto p : daneOPociagach) {
            if (numer == to_string(daneOPociagach[i].numerPociagu)) {
                odpowiedz += "Pociag o nazwie: " + daneOPociagach[i].nazwa + "      o numerze: " + to_string(daneOPociagach[i].numerPociagu) + "        do: " + daneOPociagach[i].stacjaDocelowa + "        odjedzie: ";
                odpowiedz += podawanieDaty.wypisanieDaty(daneOPociagach[i].dataOdjazdu);
                odpowiedz += "      z peronu: " + to_string(daneOPociagach[i].peronOdjazdu) + "\n";
                return odpowiedz;
            }
            i++;
        }
        odpowiedz = "B³êdny numer. Poci¹g o takim numerze nie istnieje. ";
        return odpowiedz;
    }

    string wyszukiwaniePoStacjiDocelowej(string stacja) {
        string odpowiedz;

        int i = 0;
        for (const auto p : daneOPociagach) {
            if (stacja == daneOPociagach[i].stacjaDocelowa) { //&& data == data2Pociagu
                odpowiedz += "Pociag o nazwie: " + daneOPociagach[i].nazwa + "      o numerze: " + to_string(daneOPociagach[i].numerPociagu) + "        do: " + daneOPociagach[i].stacjaDocelowa + "        odjedzie: ";
                odpowiedz += podawanieDaty.wypisanieDaty(daneOPociagach[i].dataOdjazdu);
                odpowiedz += "      z peronu: " + to_string(daneOPociagach[i].peronOdjazdu) + "\n";
                return odpowiedz;
            }
            i++;
        }
        odpowiedz = "B³êdna nazwa. Stacja o takiej nazwie nie istnieje. ";
        return odpowiedz;
    }
};

class FunkcjeAdministratorow {
private:
    string haslo;
    string login;

public:
    void dodawanieAdministratora(string login, string haslo) {

        daneAdministratorow.push_back(Administrator(login, haslo, false));
    }

    int usuwanieAdministratora(string login, string haslo) {
        int wynik = 0;
        for (int i = 0; i < daneAdministratorow.size(); i++) {
            if (login == daneAdministratorow[i].login && haslo == daneAdministratorow[i].haslo && daneAdministratorow[i].czyZalogowano == 1) {
                wynik = 2;
            }else if(login == daneAdministratorow[i].login && haslo == daneAdministratorow[i].haslo) {
                daneAdministratorow.erase(daneAdministratorow.begin() + i);
                wynik = 1;
            }
        }
        return wynik;
    }

    bool logowanie(const string l, const string p) {
        for (int i = 0; i < daneAdministratorow.size(); i++) {
            if (l == daneAdministratorow[i].login && p == daneAdministratorow[i].haslo) {
                daneAdministratorow[i].czyZalogowano = true;
                return true;
            }
        }
        return false;
    }

    bool wylogowanie() {
        for (int i = 0; i < daneAdministratorow.size(); i++) {
            if (daneAdministratorow[i].czyZalogowano == true) {
                daneAdministratorow[i].czyZalogowano = false;
                return true;
            }
        }
        return false;
    }

};

#endif BAZADANYCH.H