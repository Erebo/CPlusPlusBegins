#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,x;
    cout<<"Enter the array size : ";
    cin>>n; 
    vector<int>arr;
    for(int i=0;i<n;i++){
        cin>>x;
        arr.push_back(x);
    }
    for(int i=0;i<arr.size();i++){
        cout<<arr.at(i)<<" ";
    }
    cout<<"\n"<<arr.front()<<"\n";
    cout<<arr.back()<<"\n";
    if(arr.empty()){
        cout<<"Empty\n";
    } else{
        cout<<"Not Empty\n";
    }
    arr.pop_back();
    for(int i=0;i<arr.size();i++){
        if(arr.at(i)%2==0){
            arr.erase(arr.begin()+i);
            i--;
        }
    }
    for(int i=0;i<arr.size();i++){
        cout<<arr.at(i)<<" ";
    arr.erase(arr.begin()+0,arr.end());
    for(int i=0;i<arr.size();i++){
        cout<<arr.at(i);
    }
    
}
    return 0;
    }
