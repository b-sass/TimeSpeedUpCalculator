#include <iostream>

using namespace std;

int temp{0};
int minutes{0};
int hours{0};
int days{0};

void kalkulacja(){

    cout << "minuty x1: ";
    cin >> temp;
    minutes += temp;

    cout << "minuty x5: ";
    cin >> temp;
    minutes += temp * 5;

    cout << "minuty x15: ";
    cin >> temp;
    minutes += temp * 15;

    cout << "minuty x30: ";
    cin >> temp;
    minutes += temp * 30;

    cout << "godziny x1: ";
    cin >> temp;
    minutes += temp * 60;

    cout << "godziny x3: ";
    cin >> temp;
    minutes += temp * 60 * 3;

    cout << "godziny x8: ";
    cin >> temp;
    minutes += temp * 60 * 8;

    cout << "dni: ";
    cin >> temp;
    minutes += temp * 60 * 24;

}


int main(){

    cout << "Speedupy budowania\n";
    kalkulacja();

    cout << "Speedupy ogolne\n";
    kalkulacja();


    cout << minutes << " minut\n";


    days = minutes / 60 / 24;

    minutes -= (days * 24 * 60);



    hours = minutes / 60;

    minutes -= (hours * 60);


    cout << days << " days, " << hours << " hours, " << minutes << " minutes." << endl;


    return 0;
}