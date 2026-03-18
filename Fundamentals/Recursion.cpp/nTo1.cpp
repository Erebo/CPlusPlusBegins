// #include<iostream>
// using namespace std;
// void R(int n){
//        if(n==0) return; // this works like continue in recursion it's called base case
//     cout<<n<<endl;//work
//     R(n-1);//call
// }
// int main(){
//     int n;
//     cout<<"Enter a number : ";
//     cin>>n;
//     R(n);
// }
#include<iostream>
using namespace std;
void R(int x ,int n){
       if(x>n) return; // this works like continue in recursion it's called base case
    cout<<x<<endl;
    R(x+1,n);
}
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    R(1,n);
}