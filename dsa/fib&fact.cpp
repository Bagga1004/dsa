
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//   int n;
//   cout<<"enter the number";
//   cin>>n;
  
//   if(n==1){
//     cout<<"not prime ";

//   }
//   int count =0;
//   for(int i=2;i<=n;i++){
//     if(n%i==0)
//     count=count+1;
//   }
//   if(count==1)
//   cout<<"prime number";
//   else{
//   cout<<"not prime";
// }
 
// }


///+++++++++++++++==================================
// #include<bits/stdc++.h>
// using namespace std;

// int fact(int n){
//   if(n==0)
//   return 1;
//   return n*fact(n-1);
// }
// int main(){
//   int n1;
//  cout<<"enter the number";
//  cin>>n1;
//  cout<<fact(n1)<<" ";
// }

////===================================================================
// #include<bits/stdc++.h>
// using namespace std;

// int fact(int n){
//   if(n==0)
//   return 1;
  
//   return n*fact(n-1);
  
// }


// int main(){
//   int n1 ,n2;
//   int sum =0;
//   cout<<"enter the first number";
//   cin>>n1;
//   cout<<"enter the second number";
//   cin>>n2;

//  for(int i=n1;i<=n2;i++){
//   cout<<"factorial of"<<i<<" is "<<fact(i)<<endl;
//   sum=sum+fact(i);
  
//  }
//  cout<<"the sum is"<<sum<<" ";
//  return 0;
// }

/////============================================================================
#include<bits/stdc++.h>
using namespace std;
int fib(int n){
  if(n==0)
  return 0;
if(n==1)
return 1;
  return fib(n-1)+fib(n-2);
}
int main(){
  int n1,n2;
  cout<<"enter first the number";
  cin>>n1;
  cout<<"enter the second number";
  cin>>n2;
  if (n1 > n2) {
        cout << "First number should be less than or equal to the second number." << endl;
        return 1;
    }
  for(int i =n1;i<=n2;i++){
    cout<<"fib of "<<i<<"is"<<fib(i)<<endl;
  }
  // cout<<endl;
   return 0;
}