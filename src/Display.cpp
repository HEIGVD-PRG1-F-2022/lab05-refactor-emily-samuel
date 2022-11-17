#include "../include/Display.h"
#include <iomanip>
#include <iostream>
#include <map>
#include <string>
#include <vector>
#ifdef _WIN32
#include <windows.h>
#endif
using namespace std;

const string COLOR_RESET = "\x1b[0;0m";
const string COLOR_RED = "\x1b[38;2;255;0;0m";
const string COLOR_YELLOW = "\x1b[38;2;255;255;0m";
const string COLOR_BLUE = "\x1b[38;2;85;85;255m";


void Display::clearScreen() {
#ifdef _WIN32
    system("cls");
#else
    cout << "\033[2J;"
         << "\033[1;1H";
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
    string test = "\\u" + to_string(code);
    // printf("\\u%04x", code);
    cout << test;
    // cout << to_wstring("\\u" + to_string(code));
}


void Display::print2DArray(const vector<vector<int>> &array, map<int, char> charmap, map<int, string> colormap, bool borders, string borderColor) {
    for (int y = 0; y < array[0].size(); ++y) {
        for (int x = 0; x < array.size(); ++x) {
            cout << borderColor << setw(2) << (borders ? "|" : "")
                 << colormap.at(array[x][y]) << setw(2) << charmap.at(array[x][y]);
        }
        if (borders)
            cout << borderColor << setw(2) << "|";
        cout << endl;
    }
    cout << COLOR_RESET;
}