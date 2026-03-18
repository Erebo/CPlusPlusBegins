#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void print(int a,int b){
    for(int i=a;i<=b;i++){
        cout<<i<<" ";
    }
    cout<<"\n";
}
int main(){
    int a,b,n;
    cout<<"Enter how many times you want to print :";
    cin>>n;
    cout<<"Enter from where to where you want to print : ";
    cin>>a;
    cin>>b;
    for(int i=0;i<n;i++){
        print(a,b);
    }



    return 0;
}