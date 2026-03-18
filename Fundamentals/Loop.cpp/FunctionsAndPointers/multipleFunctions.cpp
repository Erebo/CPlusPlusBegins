#include<iostream>
using namespace std;
void india(){
    cout<<"You're in India\n ";
   return;
   cout<<"You're in India ";
   cout<<"Hey ";
   cout<<"What's up";
}
void usa(){
    cout<<"You're in USA\n";
    india();
}
int main(){
    usa();
    cout<<"You're in main\n";
    india();
}