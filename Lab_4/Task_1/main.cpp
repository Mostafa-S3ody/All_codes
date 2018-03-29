#include <iostream>

using namespace std;

void sort_num (int &x,int &y,int &z){
int m;
if (y>x){
    m = x;
    x = y;
    y = m;
}
if (z>x){
    m = x;
    x = z;
    z = m;
}
if (z>y){
    m = y;
    y = z;
    z = m;
}
cout << x << y << z;
}



int main()
{
int x,y,z;
cout << "Insert the three numbers : ";
cin >> x >> y >> z;
sort_num(x,y,z);
    return 0;
}
