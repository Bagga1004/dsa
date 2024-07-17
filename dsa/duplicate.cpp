

// // duplicate in array

// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter the size of the array: ";
//     cin >> n;

//     int arr[n];
//     cout << "Enter " << n << " elements: " << endl;
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     int last_unique = arr[0];
//     int index = 1;
//       for(int i=1;i<n;i++){
//         if(arr[i]!= last_unique){
//             arr[index]=arr[i];
//             last_unique = arr[i];
//             index++;
//         }
//       }

//     for(int i =0 ; i<index;i++){
//         cout<<arr[i]<< " ";
//     }
//     return 0;
// }




//OTHER method

// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter the size of the array: ";
//     cin >> n;

//     int arr[n];
//     cout << "Enter " << n << " elements: " << endl;
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     for(int i =0;i<n ; i++){
//         if(arr[i]!= -1){
//             cout<<arr[i]<<" ";
//         }

//         for(int j=i+1; j<n ;j++){
//             if(arr[i]==arr[j]){
//                 arr[j] = -1;
//                 }
//         }
//     }
   
    
// }



//++++++++=====================================================================================================

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of the array";
    cin>>n;

    int arr[n];
    for(int i =0;i<n ;i++){
        cin>>arr[i];
    }

    unordered_map<int, int>mp;
    for(int i=0 ;i<n;i++){
        mp[arr[i]]++;
    }

   for(auto it:mp){
    if(it.second==1){
        cout<<it.first<<" ";
    }
   }
   cout<<endl;
}