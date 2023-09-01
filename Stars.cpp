#include <iostream>

using namespace std;

int main()
{
    int n = 5;
    cout << "Enter the number of stars: ";
    cin >> n;

    // Print the top half of the diamond
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * (n - i) - 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    // Print the bottom half of the diamond
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * (n - i) - 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
