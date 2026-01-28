## Note

This was a first-year educational project focused on learning **programming fundamentals** and **problem-solving**.

# Final Project: Minesweeper 🚩

Congratulations! You've made it this far 🥳. Now for the real challenge. This assignment will test all the skills you have learned so far. You are tasked with implementing [Minesweeper](<https://en.wikipedia.org/wiki/Minesweeper_(video_game)>) in **C**.

On an 8x8 grid, a given number of mines are hidden. Each cell is initially hidden until the player selects it.

- The player can enter a location using a **letter followed by a number or number followed by a letter** (both `C5` and `5C`, or lowercase `c5` are valid).
- Numbers range from 1 to 8, letters from A to H.

If a mine is revealed, the game ends and all other mines are shown. If no mine is present, the number of mines in the neighboring cells (top-left, top, top-right, left, right, bottom-left, bottom, bottom-right) is displayed. If a cell has **no neighboring mines**, all adjacent cells without mines are automatically revealed recursively (flood fill).

The game is won when all non-mine cells have been revealed. The progress is shown as a percentage:

Progress (%) = (Number of revealed cells) / (Total non-mine cells) \* 100%

Players can save the current game at any point by entering the word `"save"`, and reload a saved game using **two hexadecimal numbers** (one for the mine locations and one for the revealed cells).

All arrays may be **global variables** (since pointers have not been covered yet), but all other variables must **not** be global. The entire code should be documented with a flowchart.

---

## Game Flow 🎲

1. Start the game by welcoming the player and asking for either the number of mines or `"load"`.
2. When loading, two hexadecimal numbers are entered representing:
   - The positions of all mines
   - The current state of revealed cells

   Input validation must check for impossible states (e.g., no mines, mines already revealed, or invalid saved board).

3. When starting a new game, the 8x8 board is filled with the specified number of mines at **random locations** (no duplicates).

4. The game continues until either a mine is revealed or the board is fully completed.
   - At any time, the player may enter `"save"` to get the **two 64-bit hex numbers** representing the minefield and revealed cells.
   - When a location is selected:
     - If a mine is there, the game ends and all mines are shown.
     - If a neighboring mine exists, display the count of adjacent mines.
     - If a cell has 0 neighboring mines, perform a **flood fill** to reveal all connected empty cells.
   - Progress is displayed as a percentage with **two decimal places**.
   - When the last non-mine cell is revealed, congratulate the player.

---

## Evaluation Criteria ☑️

- Clear and properly formatted messages, boards, and menus
- Proper variable usage, meaningful and consistent naming, and correct `scanf()` data types
- Correct calculation and formatting of progress percentage (2 decimal places)
- Correct game mechanics:
  - Game ends when a mine is selected
  - Flood fill works for 0-cells
- Boards are printed using loops
- Game and input logic handled inside `while` loops
- Proper use of functions, no unnecessary duplication, and functions limited to **32 lines** (excluding blank lines)
- All functions defined in a **header file**
- 8x8 game board maintained as a **2D array**
- Strings used for input (letter+number, number+letter, `"save"`, `"load"`)
- Flowchart included in code comments (link to Miro)
- A 64-bit integer is used to store all mines and another 64-bit integer for revealed cells
- Loading a game requires two 64-bit hexadecimal numbers
- Fully functional without crashing
- Extra points possible for optional enhancements

---

## Optional Enhancements 👾

These are bonus points (1 point max):

- ASCII art
- Recursive functions (flood fill)
- Highscore tracking with player names
