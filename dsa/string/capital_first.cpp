#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cout<<"enter the strings";
    getline(cin , str);

    for(int i=0;i<str.size();i++){
        if(i==0){
            str[i]=toupper(str[i]);
        }else if(str[i]==' '&& str[i+1]!=' '){
            str[i+1]=toupper(str[i+1]);
        }else if(str[i]==' '&& str[i-1]!=' '){
            str[i-1]=toupper(str[i-1]);
        
        }
    }
     cout<<"capitallize string "<<str<<endl;
    
    
}