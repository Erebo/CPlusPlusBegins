#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    for(int i=n-1; i > 1; i--){
        if( n%i == 0 ) {cout<<"This is a Composite Number";
        break; 
        } 
           
    }
    
    
}