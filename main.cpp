#include <iostream>

using namespace std;

string pytaniaMatematyczne[] = {
        "Czy można dzielić przez zero?",
        "Czy każdy trójkąt ma co najmniej dwa kąty ostre?",
        "Czy liczba PI w przybliżeniu wynosi 3.14?",
        "Czy 1 jest liczbą pierwszą?",
};

string odpowiedziMatematyczne[] = {
        "nie",
        "tak",
        "tak",
        "nie",
};

string pytaniaHistoryczne[] = {
        "Czy chrzest Polski miał miejsce w 966 r.?",
        "Czy Bitwa Pod Grunwaldem miała miejsce w 1510 r.?",
        "Czy I wojna światowa zakończyła się w 1918 roku?",
        "Czy Bitwa pod Waterloo była bitwą wojny secesyjnej?",
};

string odpowieziHistoryczne[] = {
        "tak",
        "nie",
        "tak",
        "nie",
};

string pytaniaInformatyczne[] = {
        "Czy Linux to system operacyjny typu closed source?",
        "Czy RAM jest rodzajem pamięci trwałej w komputerze?",
        "Czy firewall to rodzaj oprogramowania lub sprzętu używanego do zabezpieczania komputera przed nieautoryzowanym dostępem do sieci?",
        "Czy komputery kwantowe korzystają z zasady superpozycji, która pozwala na jednoczesne istnienie wielu stanów obliczeniowych?",
};

string odpowieziInformatyczne[] = {
        "nie",
        "nie",
        "tak",
        "tak",
};

string pytaniaGeograficzne[] = {
        "Czy na świecie jest 7 kontynentów?",
        "Czy rzeka Nil przepływa przez Egipt?",
        "Czy Wenezuela graniczy z Brazylią?",
        "Czy Ocean Indyski jest najwiekszym na świecie?",
};

string odpowieziGeograficzne[] = {
        "tak",
        "tak",
        "tak",
        "nie",
};

int matematyczny() {
    string odpowiedz;
    int poprawneOdpowiedzi = 0;

    for (int i = 0; i < 4; i++) {
        cout << pytaniaMatematyczne[i] << " tak/nie" << endl;
        cin >> odpowiedz;

        if((odpowiedz == "tak" && odpowiedziMatematyczne[i] == "tak") || (odpowiedz == "nie" && odpowiedziMatematyczne[i] == "nie")) {
            cout << "Poprawna odpowiedź!" << endl;
            poprawneOdpowiedzi++;
        } else {
            cout << "Błędna odpowiedź! Poprawna odpowiedź to: " << odpowiedziMatematyczne[i] << endl;
        }
    }

    return poprawneOdpowiedzi;
}

int historyczny() {
    string odpowiedz;
    int poprawneOdpowiedzi = 0;

    for (int i = 0; i < 4; i++) {
        cout << pytaniaHistoryczne[i] << " tak/nie" << endl;
        cin >> odpowiedz;

        if((odpowiedz == "tak" && odpowieziHistoryczne[i] == "tak") || (odpowiedz == "nie" && odpowieziHistoryczne[i] == "nie")) {
            cout << "Poprawna odpowiedź!" << endl;
            poprawneOdpowiedzi++;
        } else {
            cout << "Błędna odpowiedź! Poprawna odpowiedź to: " << odpowieziHistoryczne[i] << endl;
        }
    }
    return poprawneOdpowiedzi;
}

int informatyczny() {
    string odpowiedz;
    int poprawneOdpowiedzi = 0;

    for (int i = 0; i < 4; i++) {
        cout << pytaniaInformatyczne[i] << " tak/nie" << endl;
        cin >> odpowiedz;

        if((odpowiedz == "tak" && odpowieziInformatyczne[i] == "tak") || (odpowiedz == "nie" && odpowieziInformatyczne[i] == "nie")) {
            cout << "Poprawna odpowiedź!" << endl;
            poprawneOdpowiedzi++;
        } else {
            cout << "Błędna odpowiedź! Poprawna odpowiedź to: " << odpowieziInformatyczne[i] << endl;
        }
    }
    return poprawneOdpowiedzi;
}

int geograficzny() {
    string odpowiedz;
    int poprawneOdpowiedzi = 0;

    for (int i = 0; i < 4; i++) {
        cout << pytaniaGeograficzne[i] << " (tak/nie)" << endl;
        cin >> odpowiedz;

        if((odpowiedz == "tak" && odpowieziGeograficzne[i] == "tak") || (odpowiedz == "nie" && odpowieziGeograficzne[i] == "nie")) {
            cout << "Poprawna odpowiedź!" << endl;
            poprawneOdpowiedzi++;
        } else {
            cout << "Błędna odpowiedź! Poprawna odpowiedź to: " << odpowieziGeograficzne[i] << endl;
        }
    }
    return poprawneOdpowiedzi;
}

int main()
{
    string testy[] = {"Matematyczny", "Historyczny", "Informatyczny", "Geograficzny"};
    string odp;
    int odpowiedz, temp;

    cout << "Witam w aplikacji do realizacji testów!" << endl;

    while(true) {
        for(int i = 0; i < (sizeof(testy)/sizeof(testy[0])); i++) {
            cout << "[" << i+1 << "] " << testy[i] << endl;
        }
        cin >> odpowiedz;

        switch(odpowiedz) {
        case 1:
            temp = matematyczny();
            cout << "Udzieliłeś odpowiedzi poprawnie na: " << temp << " pytanie/pytania z 4." << endl;
            break;
        case 2:
            temp = historyczny();
            cout << "Udzieliłeś odpowiedzi poprawnie na: " << temp << " pytanie/pytania z 4." << endl;
            break;
        case 3:
            temp = informatyczny();
            cout << "Udzieliłeś odpowiedzi poprawnie na: " << temp << " pytanie/pytania z 4." << endl;
            break;
        case 4:
            temp = geograficzny();
            cout << "Udzieliłeś odpowiedzi poprawnie na: " << temp << " pytanie/pytania z 4." << endl;
            break;
        default:
            cout << endl << "Opcja powinna mieścić się w zakresie od 1 do 4!" << endl;
        }

        cout << "Czy chcesz kontynuować? (Y/N)" << endl;
        cin >> odp;

        if (odp == "N" || odp == "n") {
            return 0;
        } else if(odp != "Y" && odp != "y") {
            cout << "Niepoprawna odpowiedź, przerywam działanie." << endl;
            return 0;
        }
    }
}
