#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter the number to check prime";
    cin>>n;

    int count =0;
    for(int i =2;i<=n;i++){
        if(n%i==0){
            count = count+1;
        }
    }
    if(count==1){
            cout<<"its a prime";
        }else{
            cout<<"not prime";
        }
}