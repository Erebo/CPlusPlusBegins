#include<iostream>
using namespace std;
int per(int f){
    int x = 1;
    for(int i=1; i<=f; i++ ){
        x *= i;
    }
    return x;
}
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    int m;
    cout<<"Enter a number : ";
    cin>>m;
    if(m>n) cout<<"Please enter a valid number : ";
    else {
        int a=per(n);
        int b=per(n-m);
        cout<<"nPr = "<<a/b;
    }

}   