#include "../include/Display.h"
#include <iostream>
#include <string>
#ifdef _WIN32
#include <windows.h>
#endif
using namespace std;


void Display::clearScreen() {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

string Display::getColoredText(const string &text, Color color) {
    string escapedText;
    string colorValue = to_string(((int) color + 31));

    escapedText += "\033[33;" + colorValue + "m" + text + "\033[0m";

    return escapedText;
}

void Display::printUTF8Char(int code) {
#ifdef _WIN32
    // system(("chcp 65001 "s + to_string(CP_UTF8)).c_str());
    SetConsoleOutputCP(CP_UTF8);
#endif

    printf("\\u%04x", code);
    // cout << to_wstring("\\u" + to_string(code));
}
