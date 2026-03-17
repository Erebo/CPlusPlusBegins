// // insert() : Add 0 after every odd number :
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n, x;
//     cout << "Enter the array size : ";
//     cin>>n;
//     vector<int> arr;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> x;
//         arr.push_back(x);
//     }
//     for (int i = 0; i < arr.size(); i++)
//     {
//         if (arr.at(i) % 2 != 0 && arr.at(i) != 0 && arr.at(i) != arr.end())
//         {
//             arr.insert(arr.begin() + i + 1, 0);
//             i++;
//         }
//     }
//     for (int i = 0; i < arr.size(); i++)
//     {
//         cout << arr.at(i);
//     }

//     return 0;
// }
// 

// // Traverse the array and swap every pair of adjacent elements only if the first element is greater than the second.
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n,x;
//     cout<<"Enter how many digits you want to input: ";
//     cin>>n;
//     vector<int>arr;
//     for(int i=0;i<n;i++){
//         cin>>x;
//         arr.push_back(x);
//     }
//     for(int i=0;i<n-1;i++){
//         if(arr.at(i)>arr.at(i+1)){
//             swap(arr[i],arr[i+1]);
//             i++;
//         }
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }

//     return 0;
// }
//Sort by marks in descending order . If marks are equal → sort by roll in ascending order

//You are given an array of integers.

//👉 Your task:

//Put all even numbers first (sorted in ascending order)

//Then put all odd numbers (sorted in descending order)
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number of digits you want to input :";
//     cin>>n;
//     int x;
//     vector<int>even,odd,NotevenNotodd;
//     for(int i=0;i<n;i++){
//         cin>>x;
//         if(x % 2 == 0 ){
//             even.push_back(x);
//         } else if (x % 2 != 0){
//             odd.push_back(x);
//         } else{
//             NotevenNotodd.push_back(x);
//         }
//     }
//     sort(even.begin(),even.end());
//     for(int i=0;i<even.size();i++){
//         cout<<even.at(i)<<" ";
//     }
//     cout<<"\n";
//     sort(odd.begin(), odd.end());
//     reverse(odd.begin(),odd.end());
//     for(int i=0;i<odd.size();i++){
//         cout<<odd.at(i)<<" ";
//     }
//     cout<<"\n";
//     for(int i=0;i<NotevenNotodd.size();i++){
//         cout<<NotevenNotodd.at(i)<<" ";
//     }



//     return 0;
// }
///////// Iteration :: /////////

