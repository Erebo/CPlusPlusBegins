// 🔥 Problem: Modify Ends and Print
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter how many digits you want to enter : ";
    cin>>n;
    list<int>mylist;
    int x;
    for(int i=0;i<n;i++){
        cin>>x;
        mylist.push_back(x);
    }
    int sum = mylist.front() + mylist.back();
    mylist.front()= sum;
    mylist.back()=sum;
    for(int x:mylist){
        cout<<x<<" ";
    }
    cout<<"\n"<<mylist.front()<<"\n";
    mylist.push_front(12);
    cout<<"\n"<<mylist.front()<<"\n";
    mylist.pop_back();
    mylist.pop_front();
    for(int x:mylist){
        cout<<x<<" ";
    }
    cout<<"\n"<<mylist.size()<<"\n";
    if(mylist.empty()){
        cout<<"\n"<<"List is empty\n";
    } else{
        cout<<"\n"<<"List is not empty\n";
    }



    return 0;
}


///  insert() :

