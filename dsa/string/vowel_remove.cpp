#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cout<<"enter the strings";
    getline(cin , str);
     
     string str1;
    for(int i =0;i<str.size();i++){
        if(str[i]>='a'&&str[i]<='z')                      // character hatane ke liye 
        // if(str[i]!='a'&&str[i]!='e'&&str[i]!='i'&&str[i]!='o'&&str[i]!='u'&&str[i]!=' ')    // vowel and space hatane ke liye
        str1+= str[i];
    }
    cout<<str1<<" ";
}