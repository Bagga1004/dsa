// #include <iostream>
// #include <cctype> 
// using namespace std;

// int main() {
//     string str;
//     cout << "Enter a string: ";
//     getline(cin, str); 

//     int vowels = 0, consonants = 0, spaces = 0;


//     for (int i=0;i<str.size();i++) {
//          char ch = str[i];
//         char lowerCh = tolower(ch);              //capital letter ko small me change kr deta h

//         if (lowerCh == 'a' || lowerCh == 'e' || lowerCh == 'i' || lowerCh == 'o' || lowerCh == 'u') {
//             vowels++;
//         }
        
//         else if (lowerCh>='a' && lowerCh<='z') {
//             consonants++;
//         }
        
//         else if (lowerCh==' ') {
//             spaces++;
//         }
//     }

//     cout << "Number of vowels: " << vowels << endl;
//     cout << "Number of consonants: " << consonants << endl;
//     cout << "Number of spaces: " << spaces << endl;

//     return 0;
// }

///=========================================================================================================

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     string str;
//     cout<<"enter the string";
//     getline(cin , str);

//     int vowels=0;
//     int consonants = 0;
//     int spaces =0;

//     for(int i=0;i<str.size();i++){
//         if(str[i]=='a'|| str[i]=='e'|| str[i]=='i'|| str[i]=='o'||str[i]=='u'){
//             vowels++;
//         }else if(str[i]>='a'&& str[i]<='z'){
//             consonants++;
//         }else if(str[i]==' '){
//             spaces++;
//         }
//     }
//     cout<<"vowels are:"<<vowels<<endl;
//     cout<<"consonants are:"<<consonants<<endl;
//     cout<<"spaces are:"<<spaces<<endl;
// }





//================================================================================================
#include <bits/stdc++.h>
#include <cctype> 
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str); 

    int vowels = 0, consonants = 0, spaces = 0;
    
    vector<char>vowelList;
    vector<char>consonantList;

    for (int i=0;i<str.size();i++) {
         char ch = str[i];
        char lowerCh = tolower(ch);              //capital letter ko small me change kr deta h

        if (lowerCh == 'a' || lowerCh == 'e' || lowerCh == 'i' || lowerCh == 'o' || lowerCh == 'u') {
            vowels++;
            vowelList.push_back(ch);
        }
        
        else if (lowerCh>='a' && lowerCh<='z') {
            consonants++;
            consonantList.push_back(ch);
        }
        
        else if (lowerCh==' ') {
            spaces++;
        }
    }

    cout << "Number of vowels: " << vowels << endl;
    for(auto v:vowelList){
             cout<<v<<endl;
    }
    cout << "Number of consonants: " << consonants << endl;
      for(auto c:consonantList){
        cout<<c<<endl;
      }
    cout << "Number of spaces: " << spaces << endl;

    return 0;
}
