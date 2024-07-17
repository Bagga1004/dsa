// #include<iostream>
// using namespace std;

// int main(){
//     int arr[3][3]={
//         {1,2,3},
//         {4,5,6},
//         {7,8,9}
//     };
//     // cout<<arr[2][2]<<endl;

//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             cout<<arr[i][j]<<" "; 
//         }

//         cout<<endl;
//     }

//     return 0;
// }


//---------------------------------------------------------------------
//user input

#include<iostream>
using namespace std;

int main(){
    int n,m;
    cout<<"enter the number of rows and column";
    cin>>n>>m;
    
     int arr[n][m];
    
    cout<<"enter the element of the array";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"matrix is:\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
}