#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    for(int i=1; i <=n ; i++){
        for(int j=1; j <=n-i+1 ; j++){// this loop for spaces 
            cout<<"  ";
        }
      for(int j=1; j <=n ; j++){// this loop for stars
            cout<<j<<" ";
        }

cout<<endl;
    }
}