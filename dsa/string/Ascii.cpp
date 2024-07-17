// A to Z 65-90
// a to z 97-122


// #include <iostream>
// #include <iomanip> // for setw
// using namespace std;

// int main() {
//     cout << "ASCII values of all characters:\n\n";

//     cout << "Char" << setw(15) << "ASCII Value\n";
//     cout << "------------------------\n";

//     for (int i = 0; i < 256; i++) {
//         cout << setw(4) << (char)i << setw(15) << i << '\n';
//     }

//     return 0;
// }



//=========================================================

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     char c;
//     cout << "Enter a character: ";
//     cin >> c;
//     cout << "ASCII value of '" << c << "' is: " << int(c) << endl;
//     return 0;
// }


///=============================================

#include<bits/stdc++.h>
using namespace std;
 int main(){
    string str;
    cout<<"enter the multiple value";
    getline(cin ,str);

    for(int i =0;i<str.size();i++){
        char c = str[i];
        cout<<"Ascii value of"<<c<<"is"<<int(c)<<endl;
    }
    

 }