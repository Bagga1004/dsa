// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n,m;
//     cin>>n>>m;
    
//     int arr[m][n];

//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cin>>arr[i][j];
//         }
//     }

//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//            if(arr[i][0]==arr[j][1] && arr[i][1]==arr[j][0]){
//             cout<<arr[i][0]<<" "<<arr[i][1]<<" ";
            
//            }
//         }
//     }
//   return 0;
    
// }




#include<iostream>
using namespace std;
int main(){
    int n =5;
    int arr[][2]={{1,2},{2,1},{3,4},{4,3},{5,4}};

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
           if(arr[i][0]==arr[j][1] && arr[i][1]==arr[j][0]){
            cout<<"("<<arr[i][0]<<", "<<arr[i][1]<<")"<<" ";
            break;
           }
        }
    }

}