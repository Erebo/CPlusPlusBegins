#include<iostream>
using namespace std;
int P(int n,int m){
    if (m == 0 ) return 1;
    else {
        return n * P(n,m-1);
    }
}
int main(){
    int n,m;
    cout<<"Enter a number : ";
    cin>>n;
    cout<<"Enter a number : ";
    cin>>m;
    cout<<n<<" to the power "<<m<<" = "<<P(n,m);
}