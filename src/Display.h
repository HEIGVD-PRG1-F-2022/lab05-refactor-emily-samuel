#ifndef DISPLAY_H
#define DISPLAY_H
#include <string>

enum class Color;

class Display {
public:
    static void clearScreen();
    static std::string getColoredText(std::string text, Color color);
    static void printUTF8Char(int code);
};
#endif