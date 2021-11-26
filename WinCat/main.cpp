//WinCat - By awesomelewis2007

#include <iostream>
#include <fstream>
#include <string>
using namespace std;
const char version = '0.1';
int main(int argc, char** argv)
{
    string file = argv[1];
    string line;
    int linenum = 0;
    ifstream myfile(file);
    if (myfile.is_open())
    {
        while (getline(myfile, line))
        {
            cout << line << '\n';
            linenum = linenum + 1;
        }
        myfile.close();
    }

    else cout << "Unable to open file";

    return 0;
}