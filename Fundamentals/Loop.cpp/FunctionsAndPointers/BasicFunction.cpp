#include<iostream>
using namespace std;
void usa() {
     cout<<"You're in USA\n ";
     return;
     cout<<"You're in USA\n ";
}

void india() {
    cout<<"You're in India\n ";

}
int main(){
    india();
    cout<<"Doesn't matter how many functions we use like india,usa at first the main function will run. And we can use the main function only one time \n";
    usa();
}
//void , int , bull, char, float etc these functions are called return type
// retrun; is like break it ends the function