#include <iostream>

using namespace std;

int main()
{
    /*int n;
    cout << "Enter the Required NUM : ";
    cin>>n;
    for(int i=0 ; i<=n ; i++){
        for(int j=1 ; j<=i ; j++){
            cout<<"*";
        }
        cout<<endl;
    }*/







    /*for (int i = 0;i<=255;i++){
        cout << i << ' ' << char(i) <<endl;
    }*/






    /*int x=0;
    string s;
    cin>>s;
    for(int i=0;i<=s.length();i++){
        if (s[i]=='n'){
            x+=1;
        }
    }
    cout<<x<<endl;*/






    int x;
    string s;
    for (int i=0;i<=10;i++){
        x = i;
        s = "0";
        while (x>0){
            if (x%2==0){
                s = s + '0';
            }
            else{
                s = s + '1';
            }
            x = x/2;
        }
        cout << i << "  >>  " << s << endl;
    }
    return 0;
}
