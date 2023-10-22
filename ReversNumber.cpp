#include<iostream>
using namespace std;

int main() {
    int n, r = 0;  // Declare variables 'n' for input and 'r' to store the reversed number, initialize 'r' to 0
    cout << "Enter the number:";  // Prompt the user to enter a number
    cin >> n;  // Read the input number from the user

    while (n != 0) {  // Start a loop that continues until 'n' becomes 0
        int ld = n % 10;  // Extract the last digit of 'n' using modulo operation
        r = r * 10 + ld;  // Multiply the current reversed number by 10 and add the last digit
        n = n / 10;  // Remove the last digit from 'n' by dividing it by 10
    }

    cout << "Reversed number: " << r << endl;  // Print the reversed number
    return 0;  // Indicate successful execution of the program
}
