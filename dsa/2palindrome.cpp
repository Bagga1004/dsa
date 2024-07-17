
// #include<iostream>
// using namespace std;

//  int main(){
    
//       int n;
//       cout<<"enter the number";
//       cin>>n;

//     int revNum = 0;
//     int original =n;
//     while(n!=0){
//         int remainder = n%10;
//         revNum = revNum*10+remainder;
//         n=n/10;
//     }
//     if(original==revNum){
//         cout<<"it is a palindrome";
//     }else{
//         cout<<"not palindrome";
//     }

//  }


//+++++++++++++++++++++====between two number ========================++++++++++++++================++++++++++++============

// #include<bits/stdc++.h>
// using namespace std;

// int isPalindrome(int n){

//     int revNum = 0;
//     int original =n;
//     while(n!=0){
//         int remainder = n%10;
//         revNum = revNum*10+remainder;
//         n=n/10;
//     }
//     return original == revNum;
// }

// int main(){
//      int n1,n2;
//     cout<<"enter the first number";
//     cin>>n1;
//     cout<<"enter the second number";
//     cin>>n2;

//     for(int i=n1;i<=n2;i++){
//         if(isPalindrome(i)){
//             cout<<i<<" ";
//         }

//     }
//     return 0;

// }

//++++++++++++++++++++================================++++++++++++++++++++++++++=========================

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n1,n2;
    cout<<"enter the first number";
    cin>>n1;
    cout<<"enter the second number";
    cin>>n2;

    for(int i=n1;i<=n2;i++){
        int revNum = 0;
        int original=i;
        while(i!=0){
            int remainder = i%10;
            revNum=revNum*10+remainder;
            i=i/10;
        }
        if(original== revNum){
            cout<<original<<" ";
        }
        i=original;
        
    }
    
}