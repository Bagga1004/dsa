

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> v(n);  

    cout << "Enter " << n << " elements: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> v[i];  
    }
    int k;
   cout<<"enter the number to add in array";
   cin>>k;

   v.push_back(k);

    cout<<"new array is :";
   for(int i = 0;i<v.size();i++){
    cout<<v[i]<<" ";
   }
  
   cout<<endl;

   reverse(v.begin(),v.end());

   cout << "Reversed array is: ";

    for(int i = 0;i<v.size();i++){
    cout<<v[i]<<" ";
   }
    cout << endl;

    sort(v.begin(), v.end());
    cout << "sorted array is: ";

    for(int i = 0;i<v.size();i++){
    cout<<v[i]<<" ";
   }
    cout << endl;

    int s=3;
    rotate(v.begin(),v.begin()+s,v.end());
    cout << "Rotate from s array is: ";

    for(int i = 0;i<v.size();i++){
    cout<<v[i]<<" ";
   }
    cout << endl;
    

    return 0;
}
