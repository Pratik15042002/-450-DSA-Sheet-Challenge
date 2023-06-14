#include <iostream>
#include <cmath>

int countDigits(int n) {
    if (n == 0) {
        return 1;
    }
    int count = 0;
    while (n != 0) {
        n = n / 10;
        count++;
    }
    return count;
}

int firstDigit(int n) {
    int digits = countDigits(n);
    n = n / pow(10, digits - 1);
    return n;
}

int main() {
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;
    
    int first = firstDigit(n);
    std::cout << "First digit: " << first << std::endl;

    return 0;
}
