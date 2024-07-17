#include <string>
#include <cctype>
#include <iostream>

using namespace std;

int main() {
    string str = "hello123world456";
    int sum = 0;

    for (char c : str) {
        if (isdigit(c)) {
            sum += c - '0'; 
        }
    }

    cout << "Sum of numbers in string: " << sum << endl;
    return 0;
}