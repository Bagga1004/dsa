//rotation with k element

// #include <iostream>
// using namespace std;

// int main() {
//     int n ,k;
//     cout << "Enter the size of the array: ";
//     cin >> n;
//     cout<<"enter the rotation element number";
//     cin>>k;

//     int arr[n];
//     cout << "Enter " << n << " elements: " << endl;
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     for(int i=0;i<k;i++){
//         int temp = arr[0];
//         for(int j=0;j<n;j++){
//             arr[j]=arr[j+1];
//         }
//         arr[n-1]=temp;
//     }


//    for(int i=0;i<n;i++){
//     cout<<arr[i]<<endl<<" ";
//    }

// }


//--------------------------------------------------------------------------------------

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     cout<<"enter the element of the array";
//     cin>>n;

//   cout<<"enter the "<<n<<"element of the array";
//     vector<int>v(n);
//     for(int i=0;i<n;i++){
//         cin>>v[i];
//     }
//     int k =2;
//     rotate(v.begin(),v.begin()+k, v.end());
//     cout<<"after rotate"<<endl;
//     for(auto i:v){
//         cout<<i<<" ";
//     }
// }


//+++++++++++++============================++++++++++++++++++++++++++++========================

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ,k;
    cout << "Enter the size of the array: ";
    cin >> n;
    cout<<"enter the rotation element number";
    cin>>k;

    int arr[n];
    cout << "Enter " << n << " elements: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int rotation(int[],n){
    int start =0;
    int end = n-1;
    while(start<end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    }
     start=0;
     end= k-1;
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }

     start = k;
     end = n-1;
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
