// #include<iostream>
// using namespace std;
// int main(){
    // int n;
    // cout<<"Enter a number : ";
    // cin>>n;
    // int i = 0;
    // while (n != 0) { // or n<0
    //     n = n/10;
    //     i++;
    // }
    // cout<<i;
    // }
 #include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int original_n = n;  // Store the original number for later output
    int i = 0;  // Digit counter initialized within the loop

    for (; n != 0; n /= 10, i++);  // No loop body, just counting digits ;;;;;n /= 10 means n = n/10;;

    cout << "The number " << original_n << " has " << i << " digits." << endl;

    return 0;
}
