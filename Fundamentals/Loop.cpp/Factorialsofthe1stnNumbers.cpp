#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a Number : ";
    cin>>n;
    int multi=1;
    for(int i=1; i<=n; i++){
        multi *= i;
         cout<<i<<"!"<<"="<<multi<<endl;
    }
//     cout<<n<<"!"<<"="<<multi;
}