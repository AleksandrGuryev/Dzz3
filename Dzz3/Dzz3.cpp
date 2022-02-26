
#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    // задание 4
   int  distanceAB, distanceBC, litre, weight;
    cin >> distanceAB >> distanceBC >> weight;
    int container = 300;
    if (weight < 500 && distanceAB <= 300 && distanceBC <= 300) {
        cout << distanceBC - (300 - distanceAB);
    }
    else  if (weight >= 500 && weight < 1000 && distanceAB <= 300/4 && distanceBC <= 300/4) {
            cout << (distanceBC * 4) - (300 - (distanceAB * 4));
    }
    else  if (weight >= 1000 && weight < 1500 && distanceAB <= 300/7 && distanceBC <= 300/7) {
        cout << (distanceBC * 7) - (300 - (distanceAB * 7));
    }
    else  if (weight >= 1500 && weight < 2000 && distanceAB <= 300/9 && distanceBC <= 300/9) {
        cout << (distanceBC * 9) - (300 - (distanceAB * 9));
    }
    else
        cout << "Перелёт невозможен!";


        /*
            // задание 3
            int  a1, a2, a3, a4, a5, a6, a7;
            cin >> a1 >> a2 >> a3 >> a4 >> a5 >> a6 >> a7;
            if (a1 > a2 && a1 > a3 && a1 > a4 && a1 > a5 && a1 > a6 && a1 > a7)
                cout << a1 << endl;
            else if (a2 > a3 && a2 > a4 && a2 > a5 && a2 > a6 && a2 > a7)
                cout << a2 << endl;
            else if (a3 > a4 && a3 > a5 && a3 > a6 && a3 > a7)
                cout << a3 << endl;
            else if (a4 > a5 && a4 > a6 && a4 > a7)
                cout << a4 << endl;
            else if (a5 > a6 && a5 > a7)
                cout << a5 << endl;
            else if (a6 > a7)
                cout << a6 << endl;
            else
                cout << a7 << endl;



            // задание 2
            int a, a1, a2, b1, b2;
            cin >> a;
            while (true) {
                a1 = a / 1000;
                a2 = (a / 100) % 10;
                b1 = (a / 10) % 10;
                b2 = a % 10;
                if (a / 1000 > 0 && a / 1000 < 10){
                    cout << a2 << a1 << endl << b2 << b1 << endl;
                break;
                }
                else
                    cout << "Вы ввели не коректное число. Повторите попытку! \n";
                cin >> a;
            }


            // задание 1
            int a, a1, a2, a3, b1, b2, b3;
            cin >> a;
            while(true){
            if (a / 100000 > 0 && a / 100000 < 10){
                a1 = a / 100000;
                a2 = (a / 10000) % 10;
                a3 = (a / 1000) % 10;
                b1 = (a / 100) % 10;
                b2 = (a / 10) % 10;
                b3 = a % 10;
                    if (a1 + a2 + a3 == b1 + b2 + b3)
                        cout << "Счастливый билет!\n";
                    else
                        cout << "Не счастливый билет\n";
                    break;
            }
            else{
                cout << "Вы ввели не верное число. Повторите попытку: \n";
                cin >> a;
                }
            }
            */
}