#include <iostream>

using namespace std;

int main()
{
    int n1,n2,n3;
    cout << "Enter the 1st NUM : ";
    cin >> n1;
    cout << "Enter the 2nd NUM : ";
    cin >> n2;
    if (n1>0 && n2>0){
        n3 = n1*n2;
        cout << "The result : " << n3 << endl;
    }
    else if (n1<0 && n2<0){
        n3 = n1*n2;
        cout << "The result : " << n3 << endl;
    }
    else {
        cout << "The result : " << 0 << endl;
    }
    return 0;
}
