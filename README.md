# Refactoring of Puissance 4
From https://github.com/HEIGVD-PRG1-F-2022/lab-03-puissance-4-quentin-guillaumed

```mermaid
classDiagram
	Game --o Display
	Game --o Input
	class Display {
		+static void clearScreen()
		+static string getColoredText(string text, Color color)
		+static void printUTF8Char(int code)
		+static void print2DArray(const vector vector~int~ &array, map~int, char~ charmap, map~int, string~ colormap, bool borders, string borderColor)
	}
	class Input {
		+static int askUserInt(int min)
		+static int askUserInt(int min, int max)
		+static float askUserFloat(float min)
		+static float askUserFloat(float min, float max)
		+static double askUserDouble(double min)
		+static double askUserDouble(double min, double max)
	}
	class Game {
		-vector vector~char~ board
		+start()
		+print() const
		+bool isMoveValid(const int column)
		+int askPlayerMoveAndValidate()
		+static void displayWinner(Player player)
		+static string getEscapedColoredCoin(Player player)
		+static void displayRules()
		+bool checkVictory(int x, int y) const
		-bool checkHorizontal(int x, int y) const
		-bool checkVertical(int x, int y) const
		-bool checkDiagonals(int x, int y) const
	}
```

## Enums
```cpp
enum class Player { EMPTY, YELLOW, RED };
enum class Color { RED, GREEN, YELLOW, BLUE, MAGENTA, CYAN, WHITE};
```
