#include <iostream>
#include <conio.h>

using namespace std;

int main() {
    int secim = 1;
    char arrow;

    while (true) {
        system("cls");

        cout << "MENU:" << endl;
        cout << (secim == 1 ? "> " : "  ") << "Secim 1" << endl;
        cout << (secim == 2 ? "> " : "  ") << "Secim 2" << endl;
        cout << (secim == 3 ? "> " : "  ") << "Secim 3" << endl;
        cout << (secim == 4 ? "> " : "  ") << "Secim 4" << endl;
        cout << (secim == 5 ? "> " : "  ") << "Cixis" << endl;

        arrow = _getch();

        switch (arrow) {
            case 72: // Yukari ox
                if (secim > 1)
                    secim--;
                break;
            case 80: // Asagi ox
                if (secim < 5)
                    secim++;
                break;
            case 13: // Enter 
                if (secim == 1)
                    cout << "1'cu secimi etdiniz." << endl;
                else if (secim == 2)
                    cout << "2'cu secimi etdiniz." << endl;
                else if (secim == 3)
                    cout << "3'cu secimi etdiniz." << endl;
                else if (secim == 4)
                    cout << "4'cu secimi etdiniz." << endl;
                else if (secim == 5) {
                    cout << "Programdan cixis edilir." << endl;
                    return 0;
                }
                break;
            default:
                break;
        }
    }

    return 0;
}
