#include<iostream>
using namespace std;
void R(int n){
    if(n==0) return;//base case
    R(n-1); //call
    cout<<n<<endl;//work
}
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    R(n);
}