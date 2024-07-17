#include<bits/stdc++.h>
using namespace std;
int main(){

    string str;

    cout<<"enter the strings";
    cin>>str;
    string str_rev;
    for(int i =str.size()-1;i>=0;i--){
        str_rev.push_back(str[i]);
        
    }
     if(str==str_rev){
        cout<<"palindrome";
        }
        else{
        "not palindrome";
       }
    //    return 0;
    
}