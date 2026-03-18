#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    int* p=&n;
    cout<<"Adress for"<<" "<<n<<" is : "<<p<<"\n"; 
    cout<<n<<endl;
    cout<<*p<<endl; // *p= at first we went to p the we pick the adress that int* p holds  then we print out the variable that the adress holds
cout<<&p; //pointer p holds the adress and p also has a adress &p reveals the adress of pointer p
}
// //In short:

// Variable: Holds the actual data (like 5).
// Pointer: Holds the address (like "box number 10") where the data is stored.
// Pointers help us find and use things stored in memory.






