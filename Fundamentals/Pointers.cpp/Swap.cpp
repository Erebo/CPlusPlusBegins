// #include<iostream>
// using namespace std;
// void swap(int &n, int &m){
//     int box = n;
//     n = m;
//     m = box;
// }
// int main(){
//     int n;
//     cout<<"Enter a number : ";
//     cin>>n;
//     int m;
//     cout<<"Enter a number : ";
//     cin>>m;
//     cout<<n<<" "<<m<<endl;
//     swap(n,m);
//     cout<<n<<" "<<m;
// }
///////////////////////////using pass by refernce
#include<iostream>
using namespace std;
void swap(int* n, int* m){
    int box = *n;
    *n = *m;
    *m = box;
}
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    int m;
    cout<<"Enter a number : ";
    cin>>m;
    cout<<n<<" "<<m<<endl;
    swap(&n,&m);
    cout<<n<<" "<<m;
}