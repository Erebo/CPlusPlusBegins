// #include<iostream>
// using namespace std;
// void change(int x){
//     x=8;
// } // the output will be same as it only pass the value. 
// int main(){
//     int x=4;
//     cout<<x<<endl;
//     change(x);
//     cout<<x<<endl;
// }
// #include<iostream>
// using namespace std;
// int main(){                 
//     int arr[5] = {1,2,3,4,5};
//     for(int i=0; i<=4; i++){
//         cout<<arr[i]<<" ";
//     }
// cout<<endl; //arrays pass the refernce so the adress is transfered
// arr[0] = {6}; 
// for(int i=0; i<=4; i++){
//     cout<<arr[i]<<" ";
// }
// }
#include<iostream>
using namespace std;
void change(int arr[]){   // int p[] int x[] anything you like but it has to be an array
    arr[0]=6; // as i am inputing array in the function so it's pass by the refernce  
}
int main(){
    int arr[5] = {1,2,3,4,5};
    for(int i=0; i<=4; i++){
        cout<<arr[i]<<" ";
    }
cout<<endl;
change(arr);
for(int i=0; i<=4; i++){
    cout<<arr[i]<<" ";
}
}

