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

//     int max = arr[0];
//     int min = arr[0];

//     for(int i=1;i<n;i++){
//         if(max < arr[i]){
//           max=arr[i];
//         }

//     }
//     for(int i=1;i<n;i++){
//         if(min > arr[i]){
//             min = arr[i];
//         }
//     }
//     cout << "The maximum element is " << max << endl;
//     cout << "The minimum element is " << min << endl;

//     return 0;
// }




//second max and second min element



// #include<iostream>
// #include<climits>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter the size of the array";
//     cin>>n;
//     int arr[n];
//     for(int i = 0; i<n; i++){
//         cin>>arr[i];
//     }

//    int firstMax = INT_MIN;
//     int secondMax = INT_MIN;

//     for(int i=1;i<n;i++){
//         if(arr[i]>firstMax){
//             secondMax = firstMax;
//             firstMax = arr[i];
//         }
//         else if(arr[i]<firstMax && arr[i]>secondMax){
//             secondMax = arr[i];
//         }
//         }
    
    
//     cout<<"second largest elementis"<<secondMax;

//     cout<<endl;

//     return 0;
// }



#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of the array";
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }

    int max = arr[0];
    for(int i = 0; i<n;i++){
        if(arr[i]> max){
            max = arr[i];
        }
    }
    int secMax = arr[0];
    for(int i = 0; i<n;i++){
        if(arr[i]>secMax && arr[i]!=max){
            secMax=arr[i];
        }
    }
    cout<<secMax<<endl;
    return 0;
}