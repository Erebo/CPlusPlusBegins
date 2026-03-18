#include<iostream>
using namespace std;
int main(){
    int arr[5];
    int a=0;
    cout<<"Enter array with space : ";
    for(int i=0; i<= 4; i++){
        cin>>arr[i];
        
        a += arr[i];
       
    }
     cout<<a;
    
}