#include <iostream>
#include <string>

using namespace std;

int main()
{
    // Initialize the variables
    int number = 0;
    int base = 0;
    string result = "";

    // Get the number and base from the user
    cout << "Enter the number: ";
    cin >> number;
    cout << "Enter the base: ";
    cin >> base;

    // Convert the number to the specified base
    while (number > 0)
    {
        result = to_string(number % base) + result;
        number /= base;
    }

    // Print the result
    cout << "The number in base " << base << " is " << result << endl;

    return 0;
}
