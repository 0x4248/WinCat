#include <iostream>
using namespace std;

int help() {
    cout << "\033[0;36mWinCat the cat command for windows\n";
    cout << "\033[0;37mMade by awesomelewis2007\n";
    cout << "Github: https://github.com/awesomelewis2007/WinCat \n";
    cout << "Usage:\n    wincat.exe [FILENAME] [ARGUMENTS]\n";
    cout << "Arguments:\n    -v    Displays the version\n    --help    Displays this help file\n    -l    Displays the line numbers and the file\n    -ln    Shows how many lines there are in a file\n";
    exit(0);
}