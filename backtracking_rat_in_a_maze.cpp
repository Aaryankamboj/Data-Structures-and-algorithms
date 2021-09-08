// 1 for unblock and 0 for block
#include <iostream>
using namespace std;

// To check whether the rat moves in next block or not
bool isSafe(int **arr, int x, int y, int n)
{
    if (x < n && y < n && arr[x][y] == 1)
    {
        return true;
    }
    return false;
}

bool ratinmaze(int** arr, int x, int y, int n, int** solArray)
{
    if (x ==( n - 1) && y ==( n - 1))
    { 
        //Base Case
        solArray[x][y] = 1;
        return true;
    }

    if (isSafe(arr, x, y, n))
    { // Check rat aage ja sakta hai ya nahi
        solArray[x][y] = 1;
        if (ratinmaze(arr, x + 1, y, n, solArray))
        {
            return true;
        }
        if (ratinmaze(arr, x, y + 1, n, solArray))
        {
            return true;
        }
        // Agar answer nahi milta dikha to backtrack kardo
        solArray[x][y] = 0; // Backtracking
        return false;
    }
    return false; // Yeh to means no path unblock for chuha
}

int main()
{
    int n;
    cin >> n;
    int** arr = new int *[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[n];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    int** solArray = new int *[n];
    for (int i = 0; i < n; i++)
    {
        solArray[i] = new int[n];
        for(int j = 0; j < n; j++)
        {
            solArray[i][j] = 0;
        }
    }

if (ratinmaze(arr, 0, 0, n, solArray))
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << solArray[i][j] << " ";
        }
        cout << endl;
    }
}
return 0;
}

//  1 0 1 0 1
//  1 1 1 1 1
//  0 1 0 1 0
//  1 0 0 1 1
//  1 1 1 0 1