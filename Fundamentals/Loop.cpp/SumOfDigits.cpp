#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    int sum = 0;
    int count = 0;
    while (n != 0){
        int LD = n%10;
        sum += LD;
        n /= 10;
        count ++;
    }
cout<<"The sum of the digits is : "<<sum<<endl;
cout<<"The number of total digits is : "<<count;

}