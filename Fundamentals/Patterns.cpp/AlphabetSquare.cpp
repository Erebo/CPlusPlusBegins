#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    if (n > 26){cout<<"Invalid";}
    else{
    for(int i=1; i<=n;i++){
        for(int i=1; i<=n;i++){
        cout<<(char)(i+64)<<" ";
        }
    cout<<endl;
    }
}
}