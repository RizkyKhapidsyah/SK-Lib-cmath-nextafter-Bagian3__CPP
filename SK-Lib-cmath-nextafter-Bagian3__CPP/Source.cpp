#include <iostream>
#include <cmath>
#include <conio.h>

/*
    Source by Programiz
    Modified For Learn by RK
    I.D.E : VS2019
*/

using namespace std;

int main() {
    double x = 0.0, y = 1.0;

    double hasilDalamDouble = nextafter(x, y);
    cout << "nextafter(x, y) = " << hasilDalamDouble << endl;

    _getch();
    return 0;
}