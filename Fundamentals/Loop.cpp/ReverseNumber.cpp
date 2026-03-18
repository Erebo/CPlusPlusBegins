#include<iostream>
using namespace std;
int main(){
  long long n;
  cout<<"Enter a number : ";
  cin>>n;
  long long i=0;
  while(n > 0){
    long long LD; // int handle 32 bit but long long handle 64 bit 
    LD = n%10;
    i = (i*10)+LD; 
   n /= 10;
  }
  cout<<"The Reverse number is : " <<i;

}
