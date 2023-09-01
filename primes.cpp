#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main(){
    // Initialize the variables
    int number {};
    string line {};
    
    cout << "Enter the upper limit: ";

    while (getline(cin, line)){
        stringstream ss(line);
        if (ss >> number && number > 0){
            if (ss.eof()){
                // Success
                break;
            }
        } else {
            cout << "The number must be positive. Please enter again: ";
        }
    }

    // Print the prime numbers
    for (int i = 2; i <= number; i++){
        // Check if the number is prime
        bool isPrime = true;
        for (int j = 2; j < i; j++){
            if (i % j == 0){
                isPrime = false;
                break;
            }
        }

        if (isPrime){
            cout << i << ", ";
        }
    }

    return 0;
}
