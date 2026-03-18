// #include<iostream>
// using namespace std;
// int C(int f){
//     int x=1;
//     for(int i=1; i<=f; i++){
//         x *= i;
//     }
//     return x;
// }
// int main(){
//     int n;
//     cout<<"Enter a number : ";
//     cin>>n;
// for(int i=0; i<=n; i++){
//     for(int j=0; j<=i; j++){
//     int a = C(i);
//     int b = C(j);
//     int c = C(i-j);
//     cout<<a / (b * c)<<" ";
// }
// cout<<endl;
// }
// return 0;
// }
// #include<iostream>
// using namespace std;

// int C(int f) {
//     int x = 1;
//     for (int i = 1; i <= f; i++) {
//         x *= i;
//     }
//     return x;
// }

// int main() {
//     int n;
//     cout << "Enter a number : ";
//     cin >> n;

//     // Loop through each row of Pascal's Triangle
//     for (int i = 0; i <= n; i++) {
//         // Add leading spaces to center-align the row
//         for (int space = 0; space < n - i; space++) {
//             cout << "  ";  // Two spaces for each level of indentation
//         }
        
//         // Loop through and print values in the row
//         for (int j = 0; j <= i; j++) {
//             int a = C(i);
//             int b = C(j);
//             int c = C(i - j);
//             cout << a / (b * c) << "  ";  // Extra spaces between numbers for proper alignment
//         }
//         cout << endl;  // Move to the next row
//     }

//     return 0;
// }
#include<iostream>
using namespace std;

// Use long long int to handle larger numbers
long long int C(int f) {
    long long int x = 1;
    for (int i = 1; i <= f; i++) {
        x *= i;
    }
    return x;
}

int main() {
    int n;
    cout << "Enter a number : ";
    cin >> n;

    // Loop through each row of Pascal's Triangle
    for (int i = 0; i <= n; i++) {
        // Add leading spaces to center-align the row
        for (int space = 0; space < n - i; space++) {
            cout << "  ";  // Two spaces for each level of indentation
        }
        
        // Loop through and print values in the row
        for (int j = 0; j <= i; j++) {
            long long int a = C(i);
            long long int b = C(j);
            long long int c = C(i - j);
            cout << a / (b * c) << "  ";  // Extra spaces between numbers for proper alignment
        }
        cout << endl;  // Move to the next row
    }

    return 0;
}
