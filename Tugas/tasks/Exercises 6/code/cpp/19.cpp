#include <iostream>
#include <vector>
using namespace std;

bool check_surrounding(vector<int> positions, int current_col, int current_row)
{
    // Row
    for (int i = 0; i < current_col; i++)
        if (positions[i] == current_row)
            return false;

    // Upperleft Diagonal
    for (int i = 1; i <= current_col; i++)
    {
        if (current_row - i < 0 || current_col - i < 0)
            break;
        if (positions[current_col - i] == current_row - i)
            return false;
    }

    // Downleft Diagonal
    for (int i = 1; i <= current_col; i++)
    {
        if (current_row + i >= 8 || current_col - i < 0)
            break;
        if (positions[current_col - i] == current_row + i)
            return false;
    }

    // Upperright Diagonal
    for (int i = 1; i <= current_col; i++)
    {
        if (current_row - i < 0 || current_col + i >= 8)
            break;
        if (positions[current_col + i] == current_row - i)
            return false;
    }

    // Downright Diagonal
    for (int i = 1; i <= current_col; i++)
    {
        if (current_row + i >= 8 || current_col + i >= 8)
            break;
        if (positions[current_col + i] == current_row + i)
            return false;
    }

    return true;
}

vector<int> eight_queens(vector<int> positions, int current_col, int current_row)
{
    if (current_col == 8)
        return positions;

    if (current_row == 8)
    {
        positions[current_col] = 8;
        return eight_queens(positions, current_col - 1, positions[current_col - 1] + 1);
    }

    bool safe = check_surrounding(positions, current_col, current_row);

    if (safe)
    {
        positions[current_col] = current_row;
        return eight_queens(positions, current_col + 1, 0);
    }
    else
    {
        return eight_queens(positions, current_col, current_row + 1);
    }
}

int main()
{
    // 8 = Empty
    vector<int> positions{8, 8, 8, 8, 8, 8, 8, 8}, solution;
    solution = eight_queens(positions, 0, 0);

    cout << "One of The Eight Queens Problem solution is: " << endl;
    for (int i = 0; i < solution.size(); i++)
    {
        char col = i + 97;
        int row = solution[i] + 1;

        cout << col << row << " ";
    }
    cout << endl
         << endl;

    for (int i = 0; i < solution.size(); i++)
    {
        for (int j = 0; j < solution.size(); j++)
        {
            if (solution[j] == i)
            {
                cout << "Q ";
            }
            else
            {
                cout << ". ";
            }
        }
        cout << endl;
    }

    return 0;
}
