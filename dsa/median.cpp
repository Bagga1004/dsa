#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the size of the array";
    cin>>n;

    int arr[n];
    for(int i=0; i<n;i++){
        cin>>arr[i];

    }
   for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
        if(arr[i]>arr[j]){
            int temp = arr[j];
            arr[j]=arr[i];
            arr[i] = temp;
        }
    }
   }
   double median;
    if(n % 2 == 0){
        median = (arr[n/2 - 1] + arr[n/2]) / 2.0;
    } else {
        median = arr[n/2];
    }

    cout<<"Median of the array: "<<median<<endl;

    return 0;
}