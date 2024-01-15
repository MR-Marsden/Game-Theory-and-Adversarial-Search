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

    // Print out the human-readable form of the board
    cout << "Board: " << endl;
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