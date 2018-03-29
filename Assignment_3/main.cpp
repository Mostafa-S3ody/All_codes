#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main()
{
    while (true){
        fstream file;
        string filename;
        float x;
        char y =' ';
        vector <float> data;
        cout << "1- Enter a new data set.\n" << "2- Load a data set.\n" << "3- Display a data set.\n" << "E- End.\n";
        cin >> y;
        if (y=='1'){
            cout << "Enter the file name : \n";
            cin >> filename;
            file.open(filename.c_str(),ios::out);
            cout << "Enter the data set : \n" << "Enter any character to end. \n";
            while (cin >> x){
                file << x;
            }
            file.close();
        }
        else if (y=='2'){
            file.open(filename.c_str(),ios::in);
            x = 0;
            while(!file.eof()){
                file >> x;
                data.push_back(x);
            }
            file.close();
        }
        else if (y=='3'){
            for (int i=0; i<data.size(); i++){
                cout << data[i] << " ";
            }
        }
        else if (y=='E'){
            break;
        }
    }
    return 0;
}
