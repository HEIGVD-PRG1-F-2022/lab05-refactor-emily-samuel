#include "Display.h";
#include <string>

using namespace std;

enum class Color { RED,
                   GREEN,
                   YELLOW,
                   BLUE,
                   MAGENTA,
                   CYAN,
                   WHITE };

void Display::clearScreen() {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}


string Display::getColoredText(string text, Color color) {
    string escapedText;
    string colorValue = to_string(((int) color + 1));
#ifdef _WIN32
    escapedText = text;
#else
    escapedText += "\033[" + colorValue + ";" + text + "a";
#endif

    return escapedText;
}

void Display::printUTF8Char(int code) {
}
