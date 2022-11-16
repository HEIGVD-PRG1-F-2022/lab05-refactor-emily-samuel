#ifndef DISPLAY_H
#define DISPLAY_H
#include <string>

enum class Color { RED,
                   GREEN,
                   YELLOW,
                   BLUE,
                   MAGENTA,
                   CYAN,
                   WHITE };

class Display {
public:
    static void clearScreen();
    static std::string getColoredText(const std::string &text, Color color);
    static void printUTF8Char(int code);
};
#endif