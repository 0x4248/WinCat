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
	printf("Welcome to the WinCat compile script\n");
	printf("Press enter to compile>");
	scanf(">");
	printf("\n");
	system("cl main.cpp /oBuild/WinCat.exe");
	printf("==================================================\n");
	printf("Done! now check Wincat/Build for the built app \nIf it is not there check the message from the compiler for errors\n");
	printf("==================================================\n");
	return 0;
}