# tictactoe/C++
trash rendition of tictactoe in c++, might update it to make the code a little less abysmal

At the very start, select your desired "team": X or O (note that that's an O not a 0 and that any input containing more than 1 character might result in weird behaviour)
(also the input character has to be capitalised, as the code checks for a capital X/O)

The game is meant for 2 players, taking turns and specifying, each time they want to make a move, the line (1-3) and column (1-3) of said move.

If the move is invalid (e.g. (4 3), (5 8), (0 2) etc.) the game will simply shut itself down.

The winner, as in any usual tic-tac-toe game, is decided when a line, column or diagonal contains only O's or X's .
