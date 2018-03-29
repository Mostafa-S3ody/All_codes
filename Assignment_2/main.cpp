#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    /*bool m;
    m = true;
    while ( m == true )
        {
        float x;
        float s = 0;
        float c = 1;
        cout << "Enter the number: ";
        cin >> x;
        cout << endl;
        if (x == 0)
            {
            cout << "The Square root equals : 0";
            m = false;
            }
        else if (x > 0)
            {
            while (abs (s - c) > 0.000001) {
                s = c;
                c  = 0.5*(c + x / c);
                m = false;
                }
            cout << endl << "The calculated square root is: " << s << endl;
            }
        else if (x < 0)
            {
            cout << "Wrong input because it's a negative number please enter a positive number : ";
            cin >> x;
            cout << endl;
            }
        }*/











/*int x,y;
y=2568%10;
x=2568/10;
 || t1%10 == 4 || t1%10 == 7
cout << y;*/


    /*bool m = true;
    while (m == true)
    {
        int t1,t2;
        cout << "Please enter the desired temperature : ";
        cin >> t1;
        cout << endl;
        if (t1>=0 || t1<=999){
            for (int i = 0; t1!=0 ;i++){
                if (t1%10 == 1  || t1%10 == 4 || t1%10 == 7)
                {
                    t2 = t1 + 5;
                    t1 = t1 - 5;
                    cout << "The desired temperatures are : " << t1 << t2 << endl;
                }
                else{
                    cout << "The desired temperature is : " << t1 << endl;
                }
            }
            m = false;
        }
        else{
            cout << "Wrong entry please enter a temperature between 0 and 999 : ";
            cin >> t1;
        }
    }*/






/*for (y = s.length()/x-1; y>0 ; y--){*/










    int x, y, i, k, n = 0, z = 0, c = 0;
	string s, new_s = " ";
	cout << "Insert the key : ";
	cin >> x;
	cout << endl;
	cout << "Type your message : ";
	cin.ignore();
	getline(cin,s);
	cout << endl;
	new_s = s[0];
	k = 2*x-2;
	for (i = 0; i < x; i++) {
        n = 2*x-2;
		if (i == 0 || i == x-1) {
		    if(i == x-1){
                n = i;
		    }
			while (n < s.length()) {
				new_s = new_s + s[n];
				n = n + k;
			}
		}
		else {
			c = c + 1;
			z = 0;
			if (x<s.length()){
                while (n < s.length()) {
                    if (z % 2 == 0) {
                        if (z == 0) {
                            n = c;
                        }
                        else{
                            n = n + (2*c);
                        }
                        if(n < s.length()){
                            new_s = new_s + s[n];
                            z = z + 1;
                        }
                    }
                    else if (z % 2 == 1) {
                        n = n + k - (2*c);
                        if (z == 1) {
                            n = 2 * x - 2;
                            n = n - c;
                        }
                        else if (z == 3){
                            n = 2 * x - 2;
                            n = n + k - c;
                        }
                        if(n < s.length()){
                            new_s = new_s + s[n];
                            z = z + 1;
                        }
                    }
                }
			}
			else if (x>s.length()){
                while (n < s.length()) {
                    if (z % 2 == 0) {
                        if (z == 0) {
                            n = c;
                        }
                        else{
                            n = n + (2*c);
                        }
                        if(n < s.length()){
                            new_s = new_s + s[n];
                            z = z + 1;
                        }
                    }
                    else if (z % 2 == 1) {
                        n = n + k - (2*c);
                        if (z == 1) {
                            n = 2 * x - 2;
                            n = n - c;
                        }
                        else if (z == 3){
                            n = 2 * x - 2;
                            n = n + k - c;
                        }
                        if(n < s.length()){
                            new_s = new_s + s[n];
                            z = z + 1;
                        }
                    }
                }
			}
		}
	}
	cout << new_s << endl;
    return 0;
}
