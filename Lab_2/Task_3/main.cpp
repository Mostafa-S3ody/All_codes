#include <iostream>

using namespace std;

int main()
{
    float x,y=0;
    cout << "Enter the quantity : ";
    cin >>x;
    if (x>=10000){
        if (x-10000<=10000){
            cout << "Taxes cost = 600 pound" <<endl;
        }
        else if (x-20000==0){
            cout << "Taxes cost = 1600 pound" <<endl;
        }
        else{
            x = x - 20000;
            y = x*0.15;
            y = y + 1600;
            cout << "Taxes cost = " << y <<endl;
        }
    }
    else{
        cout <<"Taxes cost = Zero" <<endl;
    }
    return 0;
}
