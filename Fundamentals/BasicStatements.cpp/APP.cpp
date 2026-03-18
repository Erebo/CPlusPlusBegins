// Display this Ap 4,7,10,.... upto n terms

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;           // a + (n-1)*d//////
    // for(int i=4; i <= (4+(n-1)*3); i += 3) cout<<i<<endl;
// Method 2 with out using the formula 
 int a=4;
     for(int i=1; i <= n; i++){ 
     cout<<a<<endl;
      a = a + 3;
}
}
