
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of the array";
    cin>>n;

    int arr[n];
    for(int i =0;i<n ;i++){
        cin>>arr[i];
    }

    unordered_map<int, int>mp;
    for(int i=0 ;i<n;i++){
        mp[arr[i]]++;
    }

   cout << "Frequencies of elements: " << endl;
   for(const auto it:mp){
       cout << it.first << ": " << it.second << endl;
   }
                 //    for(auto it =mp.begin(); it!=mp.end();it++){                  //for itrate this loop is working
                 //     cout << it->first << ": " << it->second << endl;
                 //    }
    
    return 0;
}