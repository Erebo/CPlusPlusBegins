// #include<iostream>
// using namespace std;
// int swap(int& x, int& y){
//     x = x+y;
//     y = x-y;
//     x = x-y;  
//     return 0;
// }
// int main(){
//     int x;
//     cout<<"Enter a number : ";
//     cin>>x;
//     int y;
//     cout<<"Enter a number : ";
//     cin>>y;
//     cout<<x<<" "<<y<<endl;
//     swap(x,y);
//       cout<<x<<" "<<y;
// }

#include<iostream>
using namespace std;

// Swap function using reference parameters
void swap(int &x, int &y) {
    x = x + y;
    y = x - y;
    x = x - y;
}

int main() {
    int x, y;

    // Input for x and y
    cout << "Enter a number for x: ";
    cin >> x;
    cout << "Enter a number for y: ";
    cin >> y;

    // Print values before swapping
    cout << "Before swapping: x = " << x << ", y = " << y << endl;

    // Call the swap function
    swap(x, y);

    // Print values after swapping
    cout << "After swapping: x = " << x << ", y = " << y << endl;

    return 0;
}

// int is generally used when we use any mathematical function like + - then we use return(a + b )
// but here we are just using swaping not a math function 