#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

// Author: Matthew Marsden

using namespace std;

int main()
{
    cout << endl;
    cout << "The format of the board for this game is the Tic-Tac-Toe format:\n"
            << "-Input consists of a single line containing the characters ., o and x.\n"
            << "-The symbol . represents an empty cell on the board.\n"
            << "-The symbol o represents a mark placed by player O.\n" 
            << "-The symbol x represents a mark placed by player X.\n" << endl;

    cout << "Please input the board: " ;

    // Read in the board format
    string input;
    cin >> input;

    cout << endl;

    cout << "The next input is a line of 3 numbers separated by spaces:\n"
            << "-The first number represents the player to move, 0 represents the X player and 1 represents the O player.\n"
            << "-The second and third numbers represent the row and column of the move to be made.\n" << endl;

    cout << "Please input the player to move and the move to be made: ";

    // Read in the numbers representing the player to move and the corresponding row and column of the move
    int A, B, C;
    cin >> A;
    cin >> B;
    cin >> C;

    cout << endl;

    // Variable to keep track of the current index of the input
    int inputIndex = 0;
    
    // Create a 2D vector to represent a human-readable of the board
    vector<vector<string>> board(3, vector<string>(3));

    // Transfer the inputted board to the 2D vector
    for(int j = 0; j < 3; j++)
    {
        for(int i = 0; i < 3; i++)
        {
            if(input[inputIndex] == '.')
            {
                // Human-readable form of the empty space is different
                board[j][i] = '_';
            }
            else
            {
                board[j][i] = input[inputIndex];
            }
           
            inputIndex++;
        }
    }

    // Check which player is making the move and change the position on the board to the corresponding symbol
    if(A == 0)
    {
        board[B][C] = 'x';
    }
    else
    {
        board[B][C] = 'o';
    }


    // Print out the human-readable form of the board after the move
    cout << "Board after move: " << endl;
    for(int j = 0; j < 3; j++)
    {
        for(int i = 0; i < 3; i++)
        {
            if(i != 2)
            {
                cout << board[j][i] << " ";
            }
            else
            {
                cout << board[j][i];
            }
        }
        cout << endl;
    }
    return 0;
}