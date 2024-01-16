# Game-Theory-and-Adversarial-Search
Here are some examples of the ideas that come from Game Theory and Adversarial Search. These ideas were explored in my Computer Science Major's Artificial Intelligence course and focused primarily on the game of Tic-Tac-Toe. Each folder contains an implementation of one of these ideas with the vast majority of implementations being built off of each other. 

## Folder Descritions and Structure:

* **Iterated Elimination of Dominated Strategies:** Contains a C++ program that executes the IEDS algorithm to find a Nash equilibrium for a two-player game.
* **Minimax:** This contains the implementation of the Minimax algorithm for the game of Tic-Tac-Toe. The program works by taking in a board state that is either in progress or just begining, determining who's turn it is currently and then finding out based on perfect play from both sides, whether the game will result in a draw or whether a winner is found. The sub-folders contain progressions of this algorithm starting from **Board Formt**, **Board Moves** and then **Termination Check**. All of these then culminate into the **Minimax.cpp** which runs the algorithm.
  * **Board Format:**
  * **Board Moves:**
  * **Termination Check:**
  * minimax.bat
  * Minimax.cpp

