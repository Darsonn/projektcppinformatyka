#include <iostream>

using namespace std;

string pytaniaMatematyczne[] = {
        "Czy mo�na dzieli� przez zero?",
        "",
        "",
        "",
};

string pytaniaHistoryczne[] = {
        "",
        "",
        "",
        "",
};

string pytaniaInformatyczne[] = {
        "",
        "",
        "",
        "",
};

string pytaniaGeograficzne[] = {
        "",
        "",
        "",
        "",
};

void matematyczny() {

}

void historyczny() {

}

void informatyczny() {

}

void geograficzny() {

}

int main()
{
    string testy[] = {"Matematyczny", "Historyczny", "Informatyczny", "Geograficzny"};
    string odp;
    int odpowiedz;

    cout << "Witam w aplikacji do realizacji test�w!" << endl;

    while(true) {
        for(int i = 0; i < (sizeof(testy)/sizeof(testy[0])); i++) {
            cout << "[" << i+1 << "] " << testy[i] << endl;
        }
        cin >> odpowiedz;

        switch(odpowiedz) {
        case 1:
            matematyczny();
            break;
        case 2:
            historyczny();
            break;
        case 3:
            informatyczny();
            break;
        case 4:
            geograficzny();
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
