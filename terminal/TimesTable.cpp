#include <iostream>

using namespace std;

// int main()
// {
//     // Initialize the variables
//     int n = 0;

//     // Get the upper limit from the user
//     cout << "Enter the upper limit: ";
//     cin >> n;

//     // Print the multiplication table
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n; j++)
//         {
//             cout << i << " * " << j << " = " << i * j << endl;
//         }
//     }

//     return 0;
// }

int main()
{
    // Initialize the variables
    int n;
    int table[10][10];

    // Get the upper limit from the user
    cout << "Enter the upper limit: ";
    cin >> n;

    // Fill the array
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            table[i][j] = i * j;
        }
    }

    // Print the multiplication table
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << table[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}