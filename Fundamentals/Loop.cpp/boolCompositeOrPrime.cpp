#include<iostream>
using namespace;
int main(){
 int n;
 cout<<"Enter a number : ";
 cin<<n;
 bool flag = 1; // 1= alaways true & 0 = false we can also write bool x/y.....
 for(int i=n-1; i >= n ; i--){//bool can only contain true or false it means 1 or 0
    if(n%1 == 0 ) flag = 0;
    break;
 }//CONFUSED
if (flag == true) cout<<"Prime";
else if (flag == false) cout<<"Composite";
else cout<<"Neither Prime nor Composite";
 }

}