// #include<iostream>
// using namespace std;
// int main(){
// int n;
// cout<<"Enter a Number : ";
// cin>>n;
// for(int i=1; i <= n; i++ ){ 
//     if(i == 5) continue;
//     if(i == 8) continue;
//     if (i == 3 || i == 9) continue;
//     cout<<i<<" ";
// }
// }
#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter a Number : ";
cin>>n;
for(int i=1; i <= n; i++ ){ 
    if(i%2 == 0 )  continue;
cout<<i<<" ";
}
}