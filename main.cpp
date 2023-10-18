#include <iostream>

using namespace std;

string pytaniaMatematyczne[] = {
        "Czy mo¿na dzieliæ przez zero?",
        "tCzy ka¿dy trójk¹t ma co najmniej dwa k¹ty ostre?",
        "tCzy liczba PI w przybli¿eniu wynosi 3.14?",
        "nCzy 1 jest liczb¹ pierwsz¹?",
};

string odpowiedziMatematyczne[] = {
        "nie",
        "tak",
        "tak",
        "nie",
};

string pytaniaHistoryczne[] = {
        "tCzy chrzest Polski mia³ miejsce w 966 r.?",
        "nCzy Bitwa Pod Grunwaldem mia³a miejsce w 1510 r.?",
        "tCzy I wojna œwiatowa zakoñczy³a siê w 1918 roku?",
        "nCzy Bitwa pod Waterloo by³a bitw¹ wojny secesyjnej?",
};

string odpowieziHistoryczne[] = {
        "tak",
        "nie",
        "tak",
        "nie",
};

string pytaniaInformatyczne[] = {
        "nCzy Linux to system operacyjny typu closed source?",
        "nCzy RAM jest rodzajem pamiêci trwa³ej w komputerze?",
        "tCzy firewall to rodzaj oprogramowania lub sprzêtu u¿ywanego do zabezpieczania komputera przed nieautoryzowanym dostêpem do sieci?",
        "tCzy komputery kwantowe korzystaj¹ z zasady superpozycji, która pozwala na jednoczesne istnienie wielu stanów obliczeniowych?",
};

string odpowieziInformatyczne[] = {
        "nie",
        "nie",
        "tak",
        "tak",
};

string pytaniaGeograficzne[] = {
        "tCzy na œwiecie jest 7 kontynentów?",
        "tCzy rzeka Nil przep³ywa przez Egipt?",
        "tCzy Wenezuela graniczy z Brazyli¹?",
        "nCzy Ocean Indyski jest najwiekszym na œwiecie?",
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
            cout << "Poprawna odpowiedŸ!" << endl;
            poprawneOdpowiedzi++;
        } else {
            cout << "B³êdna odpowiedŸ! Poprawna odpowiedŸ to: " << odpowiedziMatematyczne[i] << endl;
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
            cout << "Poprawna odpowiedŸ!" << endl;
            poprawneOdpowiedzi++;
        } else {
            cout << "B³êdna odpowiedŸ! Poprawna odpowiedŸ to: " << odpowieziHistoryczne[i] << endl;
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
            cout << "Poprawna odpowiedŸ!" << endl;
            poprawneOdpowiedzi++;
        } else {
            cout << "B³êdna odpowiedŸ! Poprawna odpowiedŸ to: " << odpowieziInformatyczne[i] << endl;
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
            cout << "Poprawna odpowiedŸ!" << endl;
            poprawneOdpowiedzi++;
        } else {
            cout << "B³êdna odpowiedŸ! Poprawna odpowiedŸ to: " << odpowieziGeograficzne[i] << endl;
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
            cout << "Udzieli³eœ odpowiedzi poprawnie na: " << temp << " pytanie/pytania z 4." << endl;
            break;
        case 2:
            temp = historyczny();
            cout << "Udzieli³eœ odpowiedzi poprawnie na: " << temp << " pytanie/pytania z 4." << endl;
            break;
        case 3:
            temp = informatyczny();
            cout << "Udzieli³eœ odpowiedzi poprawnie na: " << temp << " pytanie/pytania z 4." << endl;
            break;
        case 4:
            temp = geograficzny();
            cout << "Udzieli³eœ odpowiedzi poprawnie na: " << temp << " pytanie/pytania z 4." << endl;
            break;
        default:
            cout << endl << "Opcja powinna mieœciæ siê w zakresie od 1 do 4!" << endl;
        }

        cout << "Czy chcesz kontynuowaæ? (Y/N)" << endl;
        cin >> odp;

        if (odp == "N" || odp == "n") {
            return 0;
        } else if(odp != "Y" && odp != "y") {
            cout << "Niepoprawna odpowiedŸ, przerywam dzia³anie." << endl;
            return 0;
        }
    }
}
