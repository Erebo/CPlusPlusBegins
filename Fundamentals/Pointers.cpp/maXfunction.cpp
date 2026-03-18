#include<iostream>
using namespace std;
int maXofTwo(int a , int b){
if(a>b) return a;
else return b;
}
int main(){
    int a;
    cout<<"Enter a number : ";
    cin>>a;
    int b;
    cout<<"Enter a number : ";
    cin>>b;
    cout<<maXofTwo(a,b);
}