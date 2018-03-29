#include <iostream>

using namespace std;

int main()
{
    int d,m,y;
    cout << "Insert today's date : ";
    cin >> d >> m >> y;
    if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10){
        if (d == 31){
            d = 1;
            m = m +1;
            cout << d << '/' << m << '/' << y;
        }
        else {
            d +=1;
            cout << d << '/' << m << '/' << y;
        }
    }
    else if ( m == 2){
        if (d == 28){
            d = 1;
            m = m +1;
            cout << d << '/' << m << '/' << y;
        }
        else {
            d +=1;
            cout << d << '/' << m << '/' << y;
        }
    }
    else if (m == 2 || m == 4 || m == 6 || m == 9 || m == 11){
        if (d == 30){
            d = 1;
            m = m +1;
            cout << d << '/' << m << '/' << y;
        }
        else {
            d +=1;
            cout << d << '/' << m << '/' << y;
        }
    }
    else if (m == 12){
            if (d == 31){
            d = 1;
            m = 1;
            y +=1;
            cout << d << '/' << m << '/' << y;
        }
        else {
            d +=1;
            cout << d << '/' << m << '/' << y;
        }
    }
    return 0;
    }
