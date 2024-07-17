#include<iostream>
using namespace std;

int main(){

    int arr[5] = {5,10,15,20,25};
     int target = 15;
     bool found = false;

     for(int i=0;i<5;i++){
        if(arr[i]==target){
        found =true;
        break;
     }
    }
    if(found) {
        cout << "Element found" << endl;
    } else {
        cout << "Element not found" << endl;
    }
    return 0;
}
    