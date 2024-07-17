// #include<iostream>
// using namespace std;

// int main(){
//     int arr[5] = {10,5,12,4,2};
//     int smallest = arr[0];

//     for(int i=1; i<5;i++){
//         if(arr[i]<smallest){
//             smallest = arr[i];
//         }
//     }
//     cout<<"The smallest element is "<<smallest<< endl;
//     return 0;
// }

//taking input from the user

#include<iostream>
using namespace std;
 
 int main(){
    int n;
    cout<<"Enter the size of the array";
    cin>>n;
     int arr[n];
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }

    int min = arr[0];

    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }
    cout<<"smallest element is:"<<min<<endl;

    return 0;
 }