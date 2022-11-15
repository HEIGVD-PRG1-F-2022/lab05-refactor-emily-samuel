# Refactoring of Puissance 4
From https://github.com/HEIGVD-PRG1-F-2022/lab-03-puissance-4-quentin-guillaumed

```mermaid
classDiagram
	direction LR
	Game --o Display
	Game --o Input
	class Display {
		+static void displayBoard(vector vector~char~ &board)
		+static void displayWinner(Player player)
		+static string getEscapedColoredCoin(Player player)
	}
	class Input {
		+static bool isMoveValid(const vector<vector<char>> &board, const int column)
		+static int askPlayerMoveAndValidate(const vector<vector<char>> &board)
	}
	class Game {
		-vector vector~char~ board
		+start()
		+print() const
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
```