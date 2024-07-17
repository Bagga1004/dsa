#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v = {3,4,5,9,2,6};

    // Finding the maximum element
    auto max = max_element(v.begin(), v.end());
    // Finding the minimum element
    auto min = min_element(v.begin(), v.end());

    cout << "Maximum element is: " << *max << endl;
    cout << "Minimum element is: " << *min << endl;

    return 0;

}