#include <iostream>

using namespace std;

string pytaniaMatematyczne[] = {
        "Czy mo�na dzieli� przez zero?",
        "tCzy ka�dy tr�jk�t ma co najmniej dwa k�ty ostre?",
        "tCzy liczba PI w przybli�eniu wynosi 3.14?",
        "nCzy 1 jest liczb� pierwsz�?",
};

string odpowiedziMatematyczne[] = {
        "nie",
        "tak",
        "tak",
        "nie",
};

string pytaniaHistoryczne[] = {
        "tCzy chrzest Polski mia� miejsce w 966 r.?",
        "nCzy Bitwa Pod Grunwaldem mia�a miejsce w 1510 r.?",
        "tCzy I wojna �wiatowa zako�czy�a si� w 1918 roku?",
        "nCzy Bitwa pod Waterloo by�a bitw� wojny secesyjnej?",
};

string odpowieziHistoryczne[] = {
        "tak",
        "nie",
        "tak",
        "nie",
};

string pytaniaInformatyczne[] = {
        "nCzy Linux to system operacyjny typu closed source?",
        "nCzy RAM jest rodzajem pami�ci trwa�ej w komputerze?",
        "tCzy firewall to rodzaj oprogramowania lub sprz�tu u�ywanego do zabezpieczania komputera przed nieautoryzowanym dost�pem do sieci?",
        "tCzy komputery kwantowe korzystaj� z zasady superpozycji, kt�ra pozwala na jednoczesne istnienie wielu stan�w obliczeniowych?",
};

string odpowieziInformatyczne[] = {
        "nie",
        "nie",
        "tak",
        "tak",
};

string pytaniaGeograficzne[] = {
        "tCzy na �wiecie jest 7 kontynent�w?",
        "tCzy rzeka Nil przep�ywa przez Egipt?",
        "tCzy Wenezuela graniczy z Brazyli�?",
        "nCzy Ocean Indyski jest najwiekszym na �wiecie?",
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
            cout << "Poprawna odpowied�!" << endl;
            poprawneOdpowiedzi++;
        } else {
            cout << "B��dna odpowied�! Poprawna odpowied� to: " << odpowiedziMatematyczne[i] << endl;
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
            cout << "Poprawna odpowied�!" << endl;
            poprawneOdpowiedzi++;
        } else {
            cout << "B��dna odpowied�! Poprawna odpowied� to: " << odpowieziHistoryczne[i] << endl;
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
            cout << "Poprawna odpowied�!" << endl;
            poprawneOdpowiedzi++;
        } else {
            cout << "B��dna odpowied�! Poprawna odpowied� to: " << odpowieziInformatyczne[i] << endl;
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
            cout << "Poprawna odpowied�!" << endl;
            poprawneOdpowiedzi++;
        } else {
            cout << "B��dna odpowied�! Poprawna odpowied� to: " << odpowieziGeograficzne[i] << endl;
        }
    }
    return poprawneOdpowiedzi;
}

int main()
{
    string testy[] = {"Matematyczny", "Historyczny", "Informatyczny", "Geograficzny"};
    string odp;
    int odpowiedz, temp;

    cout << "Witam w aplikacji do realizacji test�w!" << endl;

    while(true) {
        for(int i = 0; i < (sizeof(testy)/sizeof(testy[0])); i++) {
            cout << "[" << i+1 << "] " << testy[i] << endl;
        }
        cin >> odpowiedz;

        switch(odpowiedz) {
        case 1:
            temp = matematyczny();
            cout << "Udzieli�e� odpowiedzi poprawnie na: " << temp << " pytanie/pytania z 4." << endl;
            break;
        case 2:
            temp = historyczny();
            cout << "Udzieli�e� odpowiedzi poprawnie na: " << temp << " pytanie/pytania z 4." << endl;
            break;
        case 3:
            temp = informatyczny();
            cout << "Udzieli�e� odpowiedzi poprawnie na: " << temp << " pytanie/pytania z 4." << endl;
            break;
        case 4:
            temp = geograficzny();
            cout << "Udzieli�e� odpowiedzi poprawnie na: " << temp << " pytanie/pytania z 4." << endl;
            break;
        default:
            cout << endl << "Opcja powinna mie�ci� si� w zakresie od 1 do 4!" << endl;
        }

        cout << "Czy chcesz kontynuowa�? (Y/N)" << endl;
        cin >> odp;

        if (odp == "N" || odp == "n") {
            return 0;
        } else if(odp != "Y" && odp != "y") {
            cout << "Niepoprawna odpowied�, przerywam dzia�anie." << endl;
            return 0;
        }
    }
}
