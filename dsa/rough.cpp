// #include <ibits/stdc++.h>
// #include <cmath> // for pow function
// using namespace std;

// int main() {
//     int num, originalNum, sum = 0, n = 0;    //n is digit counter
    
//     cout << "Enter a number: ";
//     cin >> num;

//     originalNum = num;
    
//     // Calculate the number of digits
//     while (num != 0) {
//         num /= 10;
//         n++;
//     }

//     num = originalNum;
    
//     // Calculate the sum of digits raised to the power n
//     while (num != 0) {
//         int digit = num % 10;
//         sum += pow(digit, n);
//         num /= 10;
//     }

//     if (sum == originalNum) {
//         cout << originalNum << " is an Armstrong number." << endl;
//     } else {
//         cout << originalNum << " is not an Armstrong number." << endl;
//     }

//     return 0;
// }



///===========================================================================================================

#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

// Function to check if a number is prime
bool isPrime(int n) {
    if (n <= 1) return false;
    int divisorCount = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            divisorCount++;
        }
    }
    return divisorCount == 2; // A prime number has exactly two divisors: 1 and itself
}

// Function to check if a number is a perfect square
bool isPerfectSquare(int n) {
    int root = sqrt(n);
    return root * root == n;
}


int main() {
    int n;
    cout<<"enter the size of the series";
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        if()
    }
}

