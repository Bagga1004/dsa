#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cout<<"enter the strings";
    getline(cin ,str);

   unordered_map<char, int>v;
    for(int i =0;i<str.size();i++){
        v[str[i]]++;
    }

    for(auto i:v){
        cout<<i.first<<" "<<i.second<<endl;
    }
}