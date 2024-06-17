#include <iostream>
using namespace std;
#include <string>
#include <vector>
#include <fstream>
#include <sstream>

struct Pociag{
    string nazwa;
    int numerPociagu;
    string stacjaDocelowa;
    int peronOdjazdu;
    long long dataOdjazdu; // format DDMMRRRRGGMM 000000000000
    bool czyOpozniony;

    Pociag(string podstawowaNazwa = "Cug", int podstawowyNumerPociagu = 0, string podstawowaStacjaDocelowa = "RZYM", int podstawowyPeronOdjazdu = 0, long long postawowaDataOdjazdu = 000000000000, bool opozniony = false)
    : nazwa(podstawowaNazwa), numerPociagu(podstawowyNumerPociagu), stacjaDocelowa(podstawowaStacjaDocelowa), peronOdjazdu(podstawowyPeronOdjazdu), dataOdjazdu(postawowaDataOdjazdu), czyOpozniony(opozniony) {}

};

struct OpoznionyPociag{
    string nazwa;
    int numerPociagu;
    string stacjaDocelowa;
    int peronOdjazdu;
    long long dataOdjazdu; // format DDMMRRRRGGMM 000000000000
    int opoznienie;
    bool czyZmienionoPeron;
    bool czyOdwolany;

    OpoznionyPociag(string podstawowaNazwa = "Cug", int podstawowyNumerPociagu = 0, string podstawowaStacjaDocelowa = "RZYM", int podstawowyPeronOdjazdu = 0, long long postawowaDataOdjazdu = 000000000000, int postawoweOpoznienie = 10,  bool zmienionoPeron = false, bool odwolany = false)
    : nazwa(podstawowaNazwa), numerPociagu(podstawowyNumerPociagu), stacjaDocelowa(podstawowaStacjaDocelowa), peronOdjazdu(podstawowyPeronOdjazdu), dataOdjazdu(postawowaDataOdjazdu), opoznienie(postawoweOpoznienie), czyZmienionoPeron(zmienionoPeron), czyOdwolany(odwolany) {}
};

struct OdwolanyPociag{
    string nazwa;
    int numerPociagu;
    string stacjaDocelowa;
    long long dataOdjazdu; // format DDMMRRRRGGMM 000000000000
    bool czyZastepczyTransport;
    string zastepczyTransport;

    OdwolanyPociag(string podstawowaNazwa = "Cug", int podstawowyNumerPociagu = 0, string podstawowaStacjaDocelowa = "RZYM", long long postawowaDataOdjazdu = 000000000000, bool boolzastepczyTransport = true, string podstawowyZastepczyTransport = "bus")
    : nazwa(podstawowaNazwa), numerPociagu(podstawowyNumerPociagu), stacjaDocelowa(podstawowaStacjaDocelowa), dataOdjazdu(postawowaDataOdjazdu), czyZastepczyTransport(boolzastepczyTransport),  zastepczyTransport(podstawowyZastepczyTransport){}
};

struct Administrator{
    string login;
    string haslo;
    bool czyZalogowano = 0;

    Administrator(string podstawowyLogin = "admin", string podstatoweHaslo = "admin", bool zalogowano = false) : login(podstawowyLogin), haslo(podstatoweHaslo), czyZalogowano(zalogowano){}
};


vector<Pociag> daneOPociagach;
vector<OpoznionyPociag> daneOOpoznionychPociagach;
vector<OdwolanyPociag> daneOOdwolanychPociagach;
vector<Administrator> daneAdministratorow;


class PodawanieDaty{
private:
    int dzien;
    int miesiac;
    int rok;
    int godzina;
    int minuta;
    long long data;

public:
    long long zamianaFormatuDaty(){
        cout << "Podaj dzien: ";
        cin >> dzien;
        cout << "Podaj miesiac: ";
        cin >> miesiac;
        cout << "Podaj rok:";
        cin >> rok;
        cout << "Podaj godzine: ";
        cin >> godzina;
        cout << "Podaj minuty: ";
        cin >> minuta;

        data = dzien * 10000000000;
        data += miesiac * 100000000;
        data += rok * 10000;
        data += godzina * 100;
        data += minuta;

        return data;
    }

    void wypisanieDaty(long long data){
        minuta = data % 100;
        godzina = (data / 100) % 100;
        rok = (data / 10000) % 10000;
        miesiac = (data / 100000000) % 100;
        dzien = (data / 10000000000) % 100;

        cout << dzien << "." << miesiac << "." << rok << " o godzinie: " << godzina << ":" << minuta;
    }

    long long mniejSzczegolowaData(long long data){
        data = data / 10000;
        return data;
    }

};

class BazaDanych{
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

    int tworzeniePliku(string nazwaPliku){
	    nazwaPliku = nazwaPliku + ".txt";
	    ofstream plik(nazwaPliku);
	    if (plik.is_open()){
		    cout << "Stworzono plik" << endl;
	    }else{
		    cerr << "Blad tworzenia pliku" << endl;
		    return 1;
	    }
	
	    plik.close();
	    return 0;
    }

    int odczytywanieDanychPociagow(){
        nazwaPliku = "BazaDanychPociagow.txt";
	    ifstream plik(nazwaPliku);
	    if (plik.is_open()){
		    while(getline(plik, linia)){
                stringstream ss(linia);
                if (ss >> nazwa >> numerPociagu >> stacjaDocelowa >> peronOdjazdu >> dataOdjazdu >> czyOpozniony){
                    daneOPociagach.push_back(Pociag(nazwa, numerPociagu, stacjaDocelowa, peronOdjazdu, dataOdjazdu, czyOpozniony));
                }else
                cerr << "Blod wczytywania linijki z pliku." << endl;
		    }
		    cout << endl;
	    }else{
		    cerr << "Blad otwarcia pliku" << endl;
		    return 1;
	    }
		
	    plik.close();
	    return 0;	
    }

    int odczytywanieDanychOpoznionychPociagow(){
        nazwaPliku = "BazaDanychOpoznionychPociagow.txt";
	    ifstream plik(nazwaPliku);
	    if (plik.is_open()){
		    while(getline(plik, linia)){
                stringstream ss(linia);
                if (ss >> nazwa >> numerPociagu >> stacjaDocelowa >> peronOdjazdu >> dataOdjazdu >> opoznienie >> czyZmienionoPeron >> czyOdwolany){
                    daneOOpoznionychPociagach.push_back(OpoznionyPociag(nazwa, numerPociagu, stacjaDocelowa, peronOdjazdu, dataOdjazdu, opoznienie, czyZmienionoPeron, czyOdwolany));
                }else
                cerr << "Blod wczytywania linijki z pliku." << endl;
		    }
		    cout << endl;
	    }else{
		    cerr << "Blad otwarcia pliku" << endl;
		    return 1;
	    }
		
	    plik.close();
	    return 0;	
    }

    int odczytywanieDanychOdwolanychPociagow(){
        nazwaPliku = "BazaDanychOdwolanychPociagow.txt";
	    ifstream plik(nazwaPliku);
	    if (plik.is_open()){
		    while(getline(plik, linia)){
                stringstream ss(linia);
                if (ss >> nazwa >> numerPociagu >> stacjaDocelowa >> dataOdjazdu >> czyZastepczyTransport >> zastepczyTransport){
                    daneOOdwolanychPociagach.push_back(OdwolanyPociag(nazwa, numerPociagu, stacjaDocelowa, dataOdjazdu, czyZastepczyTransport, zastepczyTransport));
                }else
                cerr << "Blod wczytywania linijki z pliku." << endl;
		    }
		    cout << endl;
	    }else{
		    cerr << "Blad otwarcia pliku" << endl;
		    return 1;
	    }
		
	    plik.close();
	    return 0;	
    }

    int odczytywanieDanychAdministratorow(){
        nazwaPliku = "BazaDanychAdministratorow.txt";
	    ifstream plik(nazwaPliku);
	    if (plik.is_open()){
		    while(getline(plik, linia)){
                stringstream ss(linia);
                if (ss >> login >> haslo >> czyZalogowano){
                    daneAdministratorow.push_back(Administrator(login, haslo, czyZalogowano));
                }else
                cerr << "Blod wczytywania linijki z pliku." << endl;
		    }
		    cout << endl;
	    }else{
		    cerr << "Blad otwarcia pliku" << endl;
		    return 1;
	    }
		
	    plik.close();
	    return 0;	
    }

    int zapisDanychPociagow(){
	    nazwaPliku = "BazaDanychPociagow.txt";
	    ofstream plik(nazwaPliku);

        for(const auto p : daneOPociagach){
	        if (plik.is_open()){
	    	    plik << p.nazwa << " " << p.numerPociagu << " " << p.stacjaDocelowa << " " << p.peronOdjazdu << " " << p.dataOdjazdu << " " << p.czyOpozniony << endl;
    	    }else{
		        cerr << "Blad otwarcia pliku" << endl;
	    	    return 1;
	        }
        }
		
	    plik.close();
	    return 0;	
    }

    int zapisDanychOpoznionychPociagow(){
	    nazwaPliku = "BazaDanychOpoznionychPociagow.txt";
	    ofstream plik(nazwaPliku);

        for(const auto p : daneOOpoznionychPociagach){
	        if (plik.is_open()){
	    	    plik << p.nazwa << " " << p.numerPociagu << " " << p.stacjaDocelowa << " " << p.peronOdjazdu << " " << p.dataOdjazdu << " " << p.opoznienie << " " << p.czyZmienionoPeron << " " << p.czyOdwolany << endl;
    	    }else{
		        cerr << "Blad otwarcia pliku" << endl;
	    	    return 1;
	        }
        }
		
	    plik.close();
	    return 0;	
    }

    int zapisDanychOdwolanychPociagow(){
	    nazwaPliku = "BazaDanychOdwolanychPociagow.txt";
	    ofstream plik(nazwaPliku);

        for(const auto p : daneOOdwolanychPociagach){
	        if (plik.is_open()){
	    	    plik << p.nazwa << " " << p.numerPociagu << " " << p.stacjaDocelowa << " " << p.dataOdjazdu << " " << p.czyZastepczyTransport << " " << p.zastepczyTransport << endl;
    	    }else{
		        cerr << "Blad otwarcia pliku" << endl;
	    	    return 1;
	        }
        }
		
	    plik.close();
	    return 0;	
    }

    int zapisDanychAdministratorow(){
	    nazwaPliku = "BazaDanychAdministratorow.txt";
	    ofstream plik(nazwaPliku);

        for(const auto p : daneAdministratorow){
	        if (plik.is_open()){
	    	    plik << p.login << " " << p.haslo << " " << p.czyZalogowano << endl;
    	    }else{
		        cerr << "Blad otwarcia pliku" << endl;
	    	    return 1;
	        }
        }
		
	    plik.close();
	    return 0;	
    }

};

class ZmianaInformacjiOPociagach{
private:
    string nazwa;
    int numerPociagu;
    string stacjaDocelowa;
    int peronOdjazdu;
    long long dataOdjazdu;
    int coDoZmiany;

    PodawanieDaty podawanieDaty;

public:

    void dodawaniePociagu(){ // zabezpieczyc zeby tylko admin mial dostep
        cout << "Dodawanie pociagu." << endl;
	    cout << "Podaj nazwe pociagu: ";
	    cin >> nazwa;
        cout << "Podaj numer pociagu: ";
	    cin >> numerPociagu;
        cout << "Podaj stacje docelowa pociagu: ";
	    cin >> stacjaDocelowa;
        cout << "Podaj peron odjazdu pociagu: ";
        cin >> peronOdjazdu;
        cout << "Podaj date odjazdu:  (format DD MM RRRR gg mm)" << endl;
        dataOdjazdu = podawanieDaty.zamianaFormatuDaty();
	    cout << endl;

        daneOPociagach.push_back(Pociag(nazwa, numerPociagu, stacjaDocelowa, peronOdjazdu, dataOdjazdu, false));
    }

    void zmianaDanychPociagu(){
        cout << "Podaj numer pociagu: ";
        cin >> numerPociagu;

        int i = 0;

        for(const auto p : daneOPociagach){
            if(numerPociagu == p.numerPociagu){
                cout << "1. Zmiana nazwy pociagu" << endl;
                cout << "2. Zmiana numeru pociagu" << endl;
                cout << "3. Zmiana stacji docelowej pociagu" << endl;
                cout << "4. Zmiana peronu odjazdu pociagu" << endl;
                cout << "5. Zmiana daty odjazdu" << endl;
                cout << "Podaj co chcesz zmienic: " << endl;
                cin >> coDoZmiany;

                switch (coDoZmiany){
                case 1:
                    cout << "Podaj nowa nazwe pociagu: ";
	                cin >> nazwa;
                    daneOPociagach[i].nazwa = nazwa;
                    break;

                case 2:
                    cout << "Podaj nowy numer pociagu: ";
                    cin >> numerPociagu;
                    daneOPociagach[i].numerPociagu = numerPociagu;
                    break;

                case 3:
                    cout << "Podaj nowa stacje docelowa: ";
                    cin >> stacjaDocelowa;
                    daneOPociagach[i].stacjaDocelowa = stacjaDocelowa;
                    break;
                
                case 4:
                    cout << "Podaj nowy peron odjazdu: ";
                    cin >> peronOdjazdu;
                    daneOPociagach[i].peronOdjazdu = peronOdjazdu;
                    break;

                case 5:
                    cout << "Podaj nowa date odjazdu:  (format DD MM RRRR gg mm)" << endl;
                    dataOdjazdu = podawanieDaty.zamianaFormatuDaty();
                    daneOPociagach[i].dataOdjazdu = dataOdjazdu;
                    break;

                default:
                    cout << "Bledny wybor!";
                    break;
                }
            }
            i++;
        }

    }

    void usuwaniePociagu(){
        cout << "Podaj numer pociagu: ";
        cin >> numerPociagu;

        for(int i = 0; i < daneOPociagach.size(); i++){
	        if (numerPociagu == daneOPociagach[i].numerPociagu){
                daneOPociagach.erase(daneOPociagach.begin() + i);
                cout << "Poprawnie usunieto pociag" << endl;
            }
        }

        for(int i = 0; i < daneOOpoznionychPociagach.size(); i++){
	        if (numerPociagu == daneOOpoznionychPociagach[i].numerPociagu){
                daneOOpoznionychPociagach.erase(daneOOpoznionychPociagach.begin() + i);
                cout << "Poprawnie usunieto pociag" << endl;
            }
        }

        for(int i = 0; i < daneOOdwolanychPociagach.size(); i++){
	        if (numerPociagu == daneOOdwolanychPociagach[i].numerPociagu){
                daneOOdwolanychPociagach.erase(daneOOdwolanychPociagach.begin() + i);
                cout << "Poprawnie usunieto pociag" << endl;
            }
        }
    }
};

class ZmianaRodzajuPociagu{
private:
    int numerPeronu;
    int opoznienie;
    bool czyZmienionoPeron;
    bool czyZastepczyTransport;
    string zastepczyTransport;

    PodawanieDaty podawanieDaty;
    
public:
    void tworzenieOpoznionegoPociagu(int numerPociagu){ // podawanie numeru pociagu ktory chemy zmienic
        int i = 0;
        for(const auto p : daneOPociagach){
            if(numerPociagu == p.numerPociagu){
                daneOPociagach[i].czyOpozniony = 1;
                cout << "Podaj opoznienie: ";
                cin >> opoznienie;
                cout << "Czy zmieniono peron: 1 - tak, 0 - nie ";
                cin >> czyZmienionoPeron;

                if (czyZmienionoPeron == 1){
                    cout << "Podaj nowy numer peronu: ";
                    cin >> numerPeronu;
                    daneOOpoznionychPociagach.push_back(OpoznionyPociag(daneOPociagach[i].nazwa, daneOPociagach[i].numerPociagu,  daneOPociagach[i].stacjaDocelowa, numerPeronu, daneOPociagach[i].dataOdjazdu, opoznienie, czyZmienionoPeron, 0));
                }else{
                    daneOOpoznionychPociagach.push_back(OpoznionyPociag(daneOPociagach[i].nazwa, daneOPociagach[i].numerPociagu,  daneOPociagach[i].stacjaDocelowa, daneOPociagach[i].peronOdjazdu, daneOPociagach[i].dataOdjazdu, opoznienie, czyZmienionoPeron, 0));
                }  
            }else{
                cout << "Nie ma pociagu o takim numerze" << endl;
            }
            i++;
        }
    }

    void tworzenieOdwolanegoPociagu(int numerPociagu){ // podawanie numeru pociagu ktory chemy zmienic najpierw pociag musi byc opozniony
        int i = 0;
        for(const auto p : daneOOpoznionychPociagach){
            if(numerPociagu == p.numerPociagu){
                daneOOpoznionychPociagach[i].czyOdwolany = 1;
                cout << "Czy jest zastepczy transport: 1 - tak, 0 - nie ";
                cin >> czyZastepczyTransport;

                if (czyZastepczyTransport == 1){
                    cout << "Podaj nowy srodek transportu: ";
                    cin >> zastepczyTransport;
                    daneOOdwolanychPociagach.push_back({daneOOpoznionychPociagach[i].nazwa, daneOOpoznionychPociagach[i].numerPociagu,  daneOOpoznionychPociagach[i].stacjaDocelowa, daneOOpoznionychPociagach[i].dataOdjazdu, czyZastepczyTransport, zastepczyTransport});
                }else{
                    daneOOdwolanychPociagach.push_back({daneOOpoznionychPociagach[i].nazwa, daneOOpoznionychPociagach[i].numerPociagu,  daneOOpoznionychPociagach[i].stacjaDocelowa, daneOOpoznionychPociagach[i].dataOdjazdu, czyZastepczyTransport, "brak"});
                }  
            }else{
                cout << "Nie ma pociagu o takim numerze" << endl;
            }
            i++;
        }
    }    
};

class WypisywaniePociagow{
private:
    PodawanieDaty podawanieDaty;

public:
    void wypisaniePociagow(){
        int i = 0;
        for(const auto p : daneOPociagach){
            if(daneOPociagach[i].czyOpozniony == 1){
                wypisanieOpoznionegoPociagu(daneOPociagach[i].numerPociagu);
            }else{
                cout << "Pociag o nazwie: " << daneOPociagach[i].nazwa << " o numerze: " << daneOPociagach[i].numerPociagu << " do: " << daneOPociagach[i].stacjaDocelowa << " odjedzie: ";
                podawanieDaty.wypisanieDaty(daneOPociagach[i].dataOdjazdu);
                cout << " z peronu: " << daneOPociagach[i].peronOdjazdu << endl;
            }
            i++;
        }
    }

    void wypisanieOpoznionegoPociagu(int numerPociagu){
        int i = 0;
        for(const auto p : daneOOpoznionychPociagach){
            if(numerPociagu == daneOOpoznionychPociagach[i].numerPociagu){
                if(daneOOpoznionychPociagach[i].czyOdwolany == 1){
                    wypisanieOdwolanegoPociagu(daneOOpoznionychPociagach[i].numerPociagu);
                }else{
                    cout << "Pociag o nazwie: " << daneOOpoznionychPociagach[i].nazwa << " o numerze: " << daneOOpoznionychPociagach[i].numerPociagu << " do: " << daneOOpoznionychPociagach[i].stacjaDocelowa << " odjedzie: ";
                    podawanieDaty.wypisanieDaty(daneOOpoznionychPociagach[i].dataOdjazdu);
                    cout << " z opoznieniem: " << daneOOpoznionychPociagach[i].opoznienie << "min z peronu: " << daneOOpoznionychPociagach[i].peronOdjazdu << endl;
                }
            }
            i++;
        }
    }


    void wypisanieOdwolanegoPociagu(int numerPociagu){
        int i = 0;
        for(const auto p : daneOOdwolanychPociagach){
            if(numerPociagu == daneOOdwolanychPociagach[i].numerPociagu){
                if(daneOOdwolanychPociagach[i].czyZastepczyTransport == 0){
                    cout << "Pociag o nazwie: " << daneOOdwolanychPociagach[i].nazwa << " o numerze: " << daneOOdwolanychPociagach[i].numerPociagu << " do: " << daneOOdwolanychPociagach[i].stacjaDocelowa << " zostal odwolany. " << endl;
                }else{
                    cout << "Pociag o nazwie: " << daneOOdwolanychPociagach[i].nazwa << " o numerze: " << daneOOdwolanychPociagach[i].numerPociagu << " do: " << daneOOdwolanychPociagach[i].stacjaDocelowa << " ma zastepczy transport: " << daneOOdwolanychPociagach[i].zastepczyTransport << " data: ";
                    podawanieDaty.wypisanieDaty(daneOOdwolanychPociagach[i].dataOdjazdu);
                    cout << endl;
                }
            }
            i++;
        }
    }
};

class WyszukiwaniePociagu{
private:
    string nazwa;
    int numer;
    PodawanieDaty podawanieDaty;
    long long data;
    long long data2Pociagu;

public:

    void wyszukiwaniePoNazwie(){
        cout << "Podaj nazwe pociagu: ";
        cin >> nazwa;

        int i = 0 ;
        for(const auto p : daneOPociagach){
            if(nazwa == daneOPociagach[i].nazwa){
                cout << "Pociag o nazwie: " << daneOPociagach[i].nazwa << " o numerze: " << daneOPociagach[i].numerPociagu << " do: " << daneOPociagach[i].stacjaDocelowa << " odjedzie: ";
                podawanieDaty.wypisanieDaty(daneOPociagach[i].dataOdjazdu);
                cout << " z peronu: " << daneOPociagach[i].peronOdjazdu << endl;
            }
            i++;
        }
    }

    void wyszukiwaniePoNumerze(){
        cout << "Podaj numer pociagu: ";
        cin >> numer;

        int i = 0 ;
        for(const auto p : daneOPociagach){
            if(numer == daneOPociagach[i].numerPociagu){
                cout << "Pociag o nazwie: " << daneOPociagach[i].nazwa << " o numerze: " << daneOPociagach[i].numerPociagu << " do: " << daneOPociagach[i].stacjaDocelowa << " odjedzie: "; 
                podawanieDaty.wypisanieDaty(daneOPociagach[i].dataOdjazdu);
                cout << " z peronu: " << daneOPociagach[i].peronOdjazdu << endl;
            }
            i++;
        }
    }

    void wyszukiwaniePoStacjiDocelowej(){
        cout << "Podaj nazwe stacji docelowej: ";
        cin >> nazwa;
        cout << "W jakiej dacie ma tam dojechac? " << endl;
        data = podawanieDaty.zamianaFormatuDaty();
        data = podawanieDaty.mniejSzczegolowaData(data);

        int i = 0 ;
        for(const auto p : daneOPociagach){
            data2Pociagu = podawanieDaty.mniejSzczegolowaData(daneOPociagach[i].dataOdjazdu);
            if(nazwa == daneOPociagach[i].stacjaDocelowa && data == data2Pociagu){
                cout << "Pociag o nazwie: " << daneOPociagach[i].nazwa << " o numerze: " << daneOPociagach[i].numerPociagu << " do: " << daneOPociagach[i].stacjaDocelowa << " odjedzie: ";
                podawanieDaty.wypisanieDaty(daneOPociagach[i].dataOdjazdu);
                cout << " z peronu: " << daneOPociagach[i].peronOdjazdu << endl;
            }
            i++;
        }
    }
};

class FunkcjeAdministratorow{
private:
string haslo;
string login;

public:
    void dodawanieAdministratora(){
        cout << "Podaj login: ";
        cin >> login;
        cout << "Podaj haslo: ";
        cin >> haslo;
        cout << endl;

        daneAdministratorow.push_back(Administrator(login, haslo, false));
    }

    void usuwanieAdministratora(){
        cout << "Dane administratora ktorego chcesz usunac: " << endl;
        cout << "Podaj login : ";
        cin >> login;
        cout << "Podaj haslo: ";
        cin >> haslo;
        cout << endl;

        for(int i = 0; i < daneAdministratorow.size(); i++){
	        if (login == daneAdministratorow[i].login && haslo == daneAdministratorow[i].haslo){
                daneAdministratorow.erase(daneAdministratorow.begin() + i);
                cout << "Poprawnie usunieto uzytkownika" << endl;
            }
        }
    }

    void logowanie(){
        cout << "Podaj login: ";
        cin >> login;
        cout << "Podaj haslo: ";
        cin >> haslo;
        cout << endl;

        for(int i = 0; i < daneAdministratorow.size(); i++){
	        if (login == daneAdministratorow[i].login && haslo == daneAdministratorow[i].haslo){
                daneAdministratorow[i].czyZalogowano = true;
                cout << "Poprawnie zalogowano" << endl;
            }
        }
    }

    void wylogowanie(){
        for(int i = 0; i < daneAdministratorow.size(); i++){
	        if (daneAdministratorow[i].czyZalogowano == true){
                daneAdministratorow[i].czyZalogowano = false;
                cout << "Poprawnie wylogowano" << endl;
            }
        }
    }

};