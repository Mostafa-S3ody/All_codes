#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream file("New Text Document.txt");
    int c=0;
    string data;
    while (!file.eof()){
        getline(file,data);
        c += 1;
    }
    cout << "There is " << c << " lines in this file";
    return 0;
}
