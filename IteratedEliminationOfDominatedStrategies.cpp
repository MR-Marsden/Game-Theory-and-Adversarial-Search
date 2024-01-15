#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

// Author: Matthew Marsden

using namespace std;

int main()
{
    // Read in the number of strategies for both players
    int strategies;
    cout << endl << "Please enter the number of strategies for both players: "; 
    cin >> strategies;
    cout << endl;

    // Create a 2D vector to represent the payoff matrix
    vector<vector<pair<int, int>>> playMatrix(strategies, vector<pair<int, int>>(strategies));

    cout << "The format of the payoff matrix is as follows:\n"
            << "-Cell entries are separated by a comma.\n"
            << "-Columns are separated by a space.\n"
            << "-Rows are separated by pressing enter.\n" << endl;

    // Input the payoff matrix values
    cout << "Please enter payoff matrix values: " << endl;
    for (int j = 0; j < strategies; j++)
    {
        for (int i = 0; i < strategies; i++)
        {
            char c;
            cin >> playMatrix[j][i].first >> c >> playMatrix[j][i].second;
        }
    }
    cout << endl;

    // Initialize variables to find the row with the highest minimum payoff
    int temp = 0;
    int rowIndex = 0;

    // Find the row with the highest minimum payoff
    for (int j = 0; j < strategies; j++)
    {
        for (int i = 0; i < strategies; i++)
        {
            if (temp < playMatrix[j][i].first)
            {
                temp = playMatrix[j][i].first;
                rowIndex = j;
            }
        }
    }

    // Initialize variables to find the column with the highest payoff for the selected row
    int colIndex = 0;

    // Find the column with the highest payoff for the selected row
    for (int j = 0; j < strategies; j++)
    {
        if(playMatrix[rowIndex][j].second > playMatrix[rowIndex][colIndex].second)
        {
            colIndex = j;
        }
    }

    // Output the Nash equilibrium
    cout << "Nash Equilibrium: ";
    cout << playMatrix[rowIndex][colIndex].first << "," << playMatrix[rowIndex][colIndex].second << endl;
    
    return 0;
}










    