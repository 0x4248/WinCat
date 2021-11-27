// Use this script to auto compile WinCat
// \WinCat
// |
// |\Build
// | |
// | WinCat.exe <-- This is the compiled file
// #-Files in \WinCat-#
#include <stdio.h>
#include <string.h>
int main() {
	system("cl main.cpp /oBuild/WinCat.exe");
	return 0;
}