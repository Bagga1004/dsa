#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the size of the array";
    cin>>n;

    int arr[n];
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

   int k;
    cout<<"enter the element to add";
     cin>>k;

    int newArr[n+1];

    for(int i=0; i<n;i++){
        newArr[i] = arr[i];
    }
    newArr[n]=k;

    for(int i =0;i<n+1;i++){
        cout<<newArr[i]<<" ";
    }
    cout<<endl;
    return 0;
}