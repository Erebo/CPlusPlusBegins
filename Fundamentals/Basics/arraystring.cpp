//Count how many distinct numbers appear more than once in an array.
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the string : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the digits : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int freq[100]={0};
    for(int i=0;i<n;i++){
        freq[arr[i]]++;
    }
    int count=0;
    for(int i=0;i<100;i++){
        if(freq[i]>1){
            cout<<i<<" aperas "<<freq[i]<<" times\n";
            count++;
        }
    }
    cout<<"Total distinguish element is "<<count;
    return 0;
}