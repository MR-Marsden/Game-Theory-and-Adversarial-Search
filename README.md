# Game-Theory-and-Adversarial-Search
Here are some examples of the ideas that come from Game Theory and Adversarial Search. These ideas were explored in my Computer Science major's Artificial Intelligence course and focused primarily on the game of Tic-Tac-Toe. Each folder contains an implementation of one of these ideas, with the vast majority of implementations being built off of each other. 

## Folder Descriptions and Structure:

* **Iterated Elimination of Dominated Strategies:** Contains a C++ program that executes the IEDS algorithm to find a Nash equilibrium for a two-player game.
  * ieods.bat
  * IteratedEliminationOfDominatedStrategies.cpp
* **Minimax:** This contains an implementation of the Minimax algorithm for the game of Tic-Tac-Toe. The program works by taking in a board state that is either in progress or just beginning, determining who's turn it is currently, and then finding out, based on perfect play from both sides, whether the game will result in a draw or whether a winner is found. The sub-folders contain progressions of this algorithm, starting from **Board Format**, **Board Moves** and then **Termination Check**. All of these then culminate into the **Minimax.cpp** which runs the algorithm.
  * **Board Format:** The first step is to represent the state of the board in memory. Contains a C++ program that takes in an initial configuration and outputs the state of the board in a human-readable form.
    * miniBoard.bat
    * MinimaxBoard.cpp
  * **Board Moves:** The next step is to implement action dynamics. Contains a C++ program that takes in an initial configuration and an action, and outputs the resulting board.
    * MinimaxMoves.cpp
    * miniMoves.bat 
  * **Termination Check:** The final step is to check if a player has won or a draw has occured. Contains a C++ program that accepts a state of the game and determines its status.
    * tCheck.bat
    * TerminationCheck.cpp
  * minimax.bat
  * Minimax.cpp

## How to Run:

Each folder contains a Windows batch file (.bat) to compile and run the C++ programs in the command line. An example is shown below:

```
minimax.bat 
```

## Sample Input and Output for each file:

**IteratedEliminationOfDominatedStrategies.cpp:**  
Sample Input  
------------  
2  
3,3 0,5  
5,0 1,1  

Sample Output  
1,1

**MinimaxBoard.cpp:**  
Sample Input  
.xox..o.x  

Sample Output  
_ x o  
x _ _  
o _ x  

**MinimaxMoves.cpp:**  
Sample Input  
.xox..o.x  
0 1 1  
Sample Output  
_ x o  
x x _  
o _ x  

**TerminationCheck.cpp:**  
Sample Input  
.........  
Sample Output  
In progress  

**Minimax.cpp:**  
Sample Input  
.xoxo.o.x  
Sample Output  
O wins  


