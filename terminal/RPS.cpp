#include <iostream>
#include <random>

using namespace std;

int main()
{
    // Initialize the variables
    int computerChoice = 1;
    int userChoice = 1;
    int winner = 1;

    // Generate a random number for the computer's choice
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(1, 3);
    computerChoice = dis(gen);

    // Get the user's choice
    cout << "Enter your choice (1 for rock, 2 for paper, 3 for scissors): ";
    cin >> userChoice;

    // Determine the winner
    if (computerChoice == 1)
    {
        if (userChoice == 1)
        {
            winner = 0;
        }
        else if (userChoice == 2)
        {
            winner = 1;
        }
        else
        {
            winner = 2;
        }
    }
    else if (computerChoice == 2)
    {
        if (userChoice == 1)
        {
            winner = 2;
        }
        else if (userChoice == 2)
        {
            winner = 0;
        }
        else
        {
            winner = 1;
        }
    }
    else
    {
        if (userChoice == 1)
        {
            winner = 1;
        }
        else if (userChoice == 2)
        {
            winner = 2;
        }
        else
        {
            winner = 0;
        }
    }

    // Display the results
    if (winner == 0)
    {
        cout << "Tie!" << endl;
    }
    else if (winner == 1)
    {
        cout << "You win!" << endl;
    }
    else
    {
        cout << "Computer wins!" << endl;
    }

    return 0;
}
