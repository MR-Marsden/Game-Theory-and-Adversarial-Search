#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// Function to check if a player has won
bool checkWin(const vector<char> board, const char player) 
{
    return ((board[0] == player && board[1] == player && board[2] == player) ||
            (board[3] == player && board[4] == player && board[5] == player) ||
            (board[6] == player && board[7] == player && board[8] == player) ||
            (board[0] == player && board[3] == player && board[6] == player) ||
            (board[1] == player && board[4] == player && board[7] == player) ||
            (board[2] == player && board[5] == player && board[8] == player) ||
            (board[0] == player && board[4] == player && board[8] == player) ||
            (board[2] == player && board[4] == player && board[6] == player));
}

// Function to return the indexes of the empty cells on the board
vector<int> getEmptyCells(const vector<char>& board) 
{
    vector<int> emptyCells;
    for (int j = 0; j < board.size(); j++) 
    {
        if(board[j] == '_') 
        {
            emptyCells.push_back(j);
        }
    }
    return emptyCells;
}

// Function implementing the minimax algorithm for game tree traversal
int minimax(vector<char> board, char player)
{
    // Get the indices of empty cells on the board
    vector<int> emptyCells = getEmptyCells(board);

    // Base case: if no more moves can be made, return 0 for a draw
    if (emptyCells.size() == 0) 
    {
        return 0;
    }

    int score = 0;

    // Check if x has won, set score to 1
    if (checkWin(board, 'x')) 
    {
        score =  1;
    } 
    // Check if o has won, set score to -1
    else if (checkWin(board, 'o')) 
    {
        score = -1;
    } 
    
    // If a win is found, return the score
    if (score != 0) 
    {
        return score;
    }

    // Recursive part of minimax algorithm
    if (player == 'x') 
    {
        int bestScore = INT_MIN;
        // Loop through the empty cells to check all possible moves
        for(int j = 0; j < emptyCells.size(); j++) 
        {
            board[emptyCells[j]] = 'x';
            // Return the best score after play
            bestScore = max(bestScore, minimax(board, 'o'));
            // Reset the board state to before the move was made
            board[emptyCells[j]] = '_';
        }
        return bestScore;
    } 
    else 
    {
        int bestScore = INT_MAX;
        // Loop through the empty cells to check all possible moves
        for(int j = 0; j < emptyCells.size(); j++)
        {
            board[emptyCells[j]] = 'o';
            // Return the best score after play
            bestScore = min(bestScore, minimax(board, 'x'));
            // Reset the board state to before the move was made
            board[emptyCells[j]] = '_';
        }
        return bestScore;
    }
}

int main()
{
    cout << endl;
    cout << "Please input the board: ";

    // Read in the board format
    string input;
    cin >> input;

    cout << endl;

    // Create a vector to represent the board
    vector<char> board;

    // Transfer the inputted board to the vector
    for(int j = 0; j < input.length(); j++)
    {
        if(input[j] == '.')
        {
            board.push_back('_');
        }
        else
        {
            board.push_back(input[j]);
        }
    }

    // Determine whose turn it is based on the count of x and o
    int x = count(board.begin(), board.end(), 'x');
    int o = count(board.begin(), board.end(), 'o');

    char currentPlayer;

    if (x == o)
    {
        currentPlayer = 'x';
    }
    else
    {
        currentPlayer = 'o';
    }

    // Call the minimax function to determine the outcome of the game
    int result = minimax(board, currentPlayer);

    // Output the result of the game
    if (result == 1) 
    {
        cout << "X wins";
    } 
    else if (result == -1) 
    {
        cout << "O wins";
    } 
    else 
    {
        cout << "Draw";
    }

    return 0;
}
