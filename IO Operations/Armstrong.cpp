#include <iostream>
using namespace std;

int main() {
    int number, originalNum, remainder, result = 0;
    
    cin>>number;
    originalNum = number;

    while (originalNum != 0) {
        // remainder contains the last digit
        remainder = originalNum % 10;
        
        result += remainder * remainder * remainder;
        
        // removing last digit from the orignal number
        originalNum /= 10;
    }

    if (result == number)
        cout  << "Part of Memorable Coin";
    else
        cout << "Not a Part of Memorable Coin";

    return 0;
}
