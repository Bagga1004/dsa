// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the lenth of the array";
//     cin>>n;
     
//      int arr[n];
//     for(int i=0;i<n;i++ ){
//         cin>>arr[i];
//     }
     
//     int maxi = arr[0];
//     int sum = 0;
//         for(int i=0;i<n;i++){
//             sum+= arr[i];
//             maxi = max(maxi,sum);
//             if(sum<0)
//               sum=0;
//         }
        
    
//     cout<<maxi<<endl;
    
   
// }



//===================================================================================

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
//     int n = 9; // Explicitly specify the size of the array

//     int sum = 0;
//     int maxi = arr[0]; // Initialize maxi to the first element

//     for (int i = 0; i < n; i++) {
//         sum += arr[i];
//         if (sum > maxi) {
//             maxi = sum;
//         }
//         if (sum < 0) {
//             sum = 0;
//         }
//     }

//     cout << "Maximum sum of subarray: " << maxi << endl;
//     return 0;
// }

//======================================================
//maximum product 

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the lenth of the array";
//     cin>>n;
     
//      int arr[n];
//     for(int i=0;i<n;i++ ){
//         cin>>arr[i];
//     }
    
//    int maxi = arr[0];
//     int product = 1;
//         for(int i=0;i<n;i++){
//             product*= arr[i];
//             maxi = max(maxi,product);
//             if(product<0)
//               product=1;
//         }
        
    
//     cout<<maxi<<endl;
    
   
// }


//==================subarray that sum up is 7 =================================

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//   int n = 8;
//   int arr[n]={3,4,-7,1,3,3,1,-4};
  

// int target = 7;
//   for(int i=0;i<n;i++){
//     int sum =0;
//     for(int j=i;j<n;j++){
//       sum+=arr[j];
//       if(sum ==target){
//         for (int k = i; k <= j; k++) {
//                     cout << arr[k] << " ";
//                 }

//            cout<<endl;     
//       }
//     }
    
//   }
//   cout<<endl<<" ";

// }
