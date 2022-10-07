#include "TApplication.h"
#include "TPolinom.h"
#include "number.h"
#include "math.h"
#include <iostream>

using namespace std;

TApplication::TApplication() {

}

int TApplication::exec() {
    int ch;
    number a = 1, b = 2, c = 1;
    number x;
    while (true) {
        cout << "1 - coefficients" << endl;
        cout << "2 - roots" << endl;
        cout << "3 - value" << endl;
        cout << "4 - print" << endl;
        cout << "0 - exit" << endl;
        cin >> ch;
        switch (ch) {
            case 0:
                return 0;
            case 1:
                cout << " a =";
                cin >> a;
                cout << " b =";
                cin >> b;
                cout << " c =";
                cin >> c;
                break;
            case 2: {
                TPolinom p(a,b,c);
                number *x = new number[2];
                int num_roots = p.roots(x);
                if (num_roots == 2) {
                    cout <<"Roots:" << x[0] << "," << x[1] << endl;
                }
                if (num_roots == 1){
                    cout <<"Root: "<<x[0]<< endl;
                }
                if (num_roots == 0)
                {
                    cout <<"No roots!" << endl;
                }
            } break;
            case 3: {
                TPolinom p(a, b, c);
                cout << "x = ";
                cin >> x;
                cout << p.value(x) << endl;
            }
                break;
            case 4: {
                TPolinom p(a, b, c);
                cout << p << endl;
            }
                break;
            default:
                break;
        }
    }
}