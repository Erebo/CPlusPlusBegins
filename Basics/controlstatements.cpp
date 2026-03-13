// Switch-case : 
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int age ;
//     cout<<"Enter your age : ";
//     cin>>age;
//     switch(age){
//         case 18 :
//         cout<<"You can take the medicine\n";
//         break;
//         case 19:
//         cout<<"You can take the medicine\n";
//         break;
//         default:
//         cout<<"You can't take the medicine\n";

//     }
//     return 0;

// }
////// Ternary operators : 
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int age;
    cout<<"Entere your age :";
    cin>>age;
    (age==18)? cout<<"You can take the medicine\n":
    (age==19)? cout<<"Your can take the medicine\n":
               cout<<"You can't take the medicine\n";



    return 0;
}