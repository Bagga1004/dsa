#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the size of the array";
    cin>>n;

    int arr[n];
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }

    int sum =0;
    float avg = 0.0 ;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        avg = sum/n;
    }
    cout<<"the sum and average is:"<<sum<< "and"<<avg<<endl;

    return 0;
}