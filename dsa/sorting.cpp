// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter the size of the array";
//     cin>>n;

//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
    
//     for(int i=0;i<n-1;i++){
//         for(int j=i+1; j<n;j++){
//             if(arr[i]>arr[j]){
//                 int temp = arr[j];
//                 arr[j]= arr[i];
//                 arr[i] = temp;
//             }
//         }
//     }

//     for(int i=0;i<n;i++){         //for the print
//         cout<<arr[i]<<" ";
//     }
   
//     return 0;
// }




//////===================================================================/////////////////==================


#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cout<<"enter the size of the array";
  cin>>n;

  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }

  // sort(arr,arr+n);                  ///either use this

  // for(int i=0;i<n-1;i++){
  //   for(int j=i+1;j<n;j++){
  //     if(arr[i]>arr[j]){             /////or this part
  //       swap(arr[i],arr[j]);
  //     }
  //   }
  // }
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
}