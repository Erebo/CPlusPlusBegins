// #include<iostream>
// using namespace std;
// int main(){
//     cout<<"Enter array elements : ";
// /// i have to put 5 integers -> 2 3 5 7 8 with array
// int arr[5];// 5 integers so 5 box ; this is called Declaration arr/nams/anything you like
// for(int i=0; i<=4;i++){
    
//     cin>>arr[i];
// }
// // arr[0]=2;
// // arr[1]=3;
// // arr[2]=5;
// // arr[3]=7;
// // arr[4]=8;
// // cout<<arr[0]<<" ";
// // cout<<arr[1]<<" ";
// // cout<<arr[2]<<" ";
// // cout<<arr[3]<<" ";
// // cout<<arr[4]<<" ";
// for(int i=0; i<=4;i++){
//     cout<<arr[i]<<" ";
// }
// }
/// the problem with the code is it is taking all the inputs as a different integers so we have to put spaces while giving inputs . To solve this problem we have to count the whole input as a single string then we have to sperate them and create different integers
// #include<iostream>
// #include<sstream>
// using namespace std;

// int main() {
//     cout << "Enter array elements (without spaces): ";
//     string input;
//     cin >> input; // Read the whole input as a string
    
//     int arr[5];
//     for (int i = 0; i < 5; i++) {
//         arr[i] = input[i] - '0'; // Convert each character to an integer
//     }

//     for (int i = 0; i < 5; i++) {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }
// to use multi number we have to use below code
#include<iostream>
#include<sstream>
using namespace std;

int main() {
    cout << "Enter array elements (with spaces): ";
    string input;
    getline(cin, input);  // Read the whole line as input

    stringstream ss(input);  // Use stringstream to handle the input
    int arr[5];

    for (int i = 0; i < 5; i++) {
        ss >> arr[i];  // Extract each number from the string
    }

    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";  // Print the numbers
    }

    return 0;
}
