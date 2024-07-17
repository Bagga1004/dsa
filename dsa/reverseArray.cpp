// 4 code of reverse array


// #include<iostream>
// using namespace std;

//  int main(){
//     int n;
//     cout<<"Enter the size of the array";
//     cin>>n;

//      int arr[n];
//     for(int i =0;i<n;i++){
//         cin>>arr[i];

//     }
//     int start = 0;
//     int end = n-1;
//     while(start<end){
//         swap(arr[start] , arr[end]);
//         start++;
//         end--;
//     }
//     cout<<"Reversed array is: ";
//     for(int i = 0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }

//     return 0 ;
//  }



//---------------------------------------------------------


// #include <iostream>
// using namespace std;

// int main() {
//      int n = 8;
//     int arr[n] = {1, 2, 3, 2, 4, 3, 1, 2}; 
   

//     int start = 0;
//     int end = n - 1;
//     while (start < end) {
//         swap(arr[start], arr[end]);
//         start++;
//         end--;
//     }

//     cout << "Reversed array is: ";
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }




//------------------------------------------------------------------------------


// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the size of the array";
//     cin>>n;
    
//     vector<int>v(n);

//     for(int i=0;i<n;i++){
//         cin>>v[i];
//     }
//     reverse(v.begin(), v.end());

//     cout << "Reversed array is: ";
//     for (int i = 0; i < v.size(); i++) {
//         cout << v[i] << " ";
//     }

//     return 0;

// }


//-------------------------------------------------------------------------------
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
    
//     vector<int>v ={2,3,4,5,6,7};

//      reverse(v.begin(), v.end());

//     cout << "Reversed array is: ";
//     for (int i = 0; i < v.size(); i++) {
//         cout << v[i] << " ";
//     }

//     return 0;
// }

//++++++++++++++++++++++++++++==============================================================

#include<bits/stdc++.h>
using namespace std;
 int main(){

int n;
cout<<"enter the number";
cin>>n;

int arr[n];
for(int i =0;i<n;i++){
    cin>>arr[i];
}

// int start = 0;
// int end = n-1;

while(arr[i]<arr[n-1]){
    swap(arr[i] , arr[n-1]);
    
    // start++;
    // end--;
}
for(int i =0;i<n;i++){
    cout<<arr[i]<<" ";
}
  
    
 }
