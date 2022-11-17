#ifndef DISPLAY_H
#define DISPLAY_H
#include <iomanip>
#include <map>
#include <string>
#include <vector>

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
    static void print2DArray(const std::vector<std::vector<int>> &array, std::map<int, char> charmap, std::map<int, std::string> colormap, bool borders, std::string borderColor);
};
#endif