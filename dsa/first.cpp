#include<iostream>
using namespace std;

int main() {
int a,b, sum=0;
 cout<<"enter the first number";
 cin>>a;
 cout<<"Enter the second number";
 cin>>b;

 if(a>b){
    int temp = a;
    a = b;
    b = temp;
 }
 
 while(a<=b){
    sum+= a*a*a;
    a++;
 }
//  int i;
//  for(i=a;i<=b;i++){
//     sum += i*i*i;
//  }
 cout<<"sum of cube:"<<sum<<endl;
 
 return 0;

}