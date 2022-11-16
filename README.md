# Refactoring of Puissance 4
From https://github.com/HEIGVD-PRG1-F-2022/lab-03-puissance-4-quentin-guillaumed

```mermaid
classDiagram
	direction LR
	Game --o Display
	Game --o Input
	class Display {
		+static clearScreen()
		+static getColoredText(string text, Color color)
		+static printUTF8Char(int code)
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
		+static bool isMoveValid(const int column)
		+static int askPlayerMoveAndValidate()
		+void displayBoard() const
		+static void displayWinner(Player player)
		+static string getEscapedColoredCoin(Player player)
		+static void diplayRules()
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