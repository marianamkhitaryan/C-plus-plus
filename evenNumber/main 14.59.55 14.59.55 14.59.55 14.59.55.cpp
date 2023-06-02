#include <iostream>

int main() {
    std:: cout << "Checking if the number is even" << std:: endl;
    std:: cout << "Enter a number" << std:: endl;
    int number;
    std:: cin >> number;

    if (number%2 == 0)
    {
        std:: cout << "The number" " " <<number<< " " "is even number" << std:: endl;
    }
    else
    {
        std:: cout << "The number" " " <<number<< " " "is odd number" << std:: endl;
    }

    return 0;
}
