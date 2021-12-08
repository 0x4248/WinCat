//WinCat - By awesomelewis2007
//Github:https://github.com/awesomelewis2007/WinCat
#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
#include "wincat.h" // <-- includes external functions 
using namespace std;

string version;
int info() {
    cout << "\033[0;36mWinCat the cat command for windows\n";
    cout << "\033[0;37mMade by awesomelewis2007\n";
    cout << "Github: https://github.com/awesomelewis2007/WinCat \n";
    cout << "Version:" << version << "\n";
    exit(0);
}
int main(int argc, char** argv)
{
    version = "0.2.3";
    if (argc == 1) {
        cout << "\033[0;31mError [3]: Missing argument\nCpp.Console.argc = 1 -> raise error\033[0;37m";
        return 3;
    }
    string arg;
    for (int i = 0; i < argc; ++i) {
        //This scans through each argument
        //if(arg == "argument goes here"){
        //  ***code goes here***
        //  return 0; <--- run this to have a argument that wont run the main script
        //}
        arg = argv[i];
        if (arg == "-ln")
        {
            string file = argv[1];
            string line;
            int linenum = 1;
            ifstream myfile(file);
            if (myfile.is_open())
            {
                while (getline(myfile, line))
                {
                    linenum = linenum + 1;
                }
                cout << linenum;
                myfile.close();
            }
            else cout << "\033[0;31mError [2]: Can't open: " << file << " Check the name and try again!\nif(file.isopen()){}else{raise error}\033[0;37m";
            return 0;
        }
        if (arg == "-l")
        {
            string file = argv[1];
            string line;
            int linenum = 1;
            ifstream myfile(file);
            if (myfile.is_open())
            {
                while (getline(myfile, line))
                {
                    cout << "\033[0;36m" << linenum << "|\033[0;37m" << line << '\n';
                    linenum = linenum + 1;
                }
                myfile.close();
            }
            else cout << "\033[0;31mError [2]: Can not open: " << file << " Check the name and try again!\nif(file.isopen()){}else{raise error}\033[0;37m";
            return 0;
        }

        if (arg == "-v")
        {
            cout << version;
            return 0;
        }
        
        if (arg == "--help")
        {
            help();
            return 0;
        }
        if (arg == "--info")
        {
            info();
            return 0;
        }
    }
    // *** MAIN SCRIPT ***

    string file = argv[1];
    string line;
    ifstream myfile(file);
    if (myfile.is_open())
    {
        while (getline(myfile, line))
        {
            cout << line << '\n';
        }
        myfile.close();
    }
    else cout << "\033[0;31mError [2]: Can not open: " << file << " Check the name and try again!\nif(file.isopen()){}else{raise error} \033[0;37m";
    return 0;
}