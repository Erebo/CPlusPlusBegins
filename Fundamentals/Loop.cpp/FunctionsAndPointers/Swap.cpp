//Method 1 = using temp


// #include<iostream>
// using namespace std;
// int main(){
//     int x=2;
//     int y=5;
//     cout<<x<<" "<<y<<endl;
//     int temp = x;
//     x = y;
//     y = temp;
//     cout<<x<<" "<<y;
// }



// Method 2 = without using temp
#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter a number : ";
    cin>>x;
    int y;
    cout<<"Enter a number : ";
    cin>>y;
    cout<<x<<" "<<y<<endl;
    x=x+y;
    y=x-y;
    x=x-y;
    cout<<x<<" "<<y;
}