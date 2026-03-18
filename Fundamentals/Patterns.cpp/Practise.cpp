//  //Wap AAA aaa
//  #include<iostream>
//  using namespace std;
//  int main(){
//     int n;
//     cout<<"Enter a number : ";
//     cin>>n;
//     for(int j=1;j<=n;j++) 
//      {
//         for(int i=1;i<=n;i++)
//         {cout<<(char)(64+j)<<" ";
//         }
//  cout<<endl;
//     }
   
//  }
//  #include<iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;

//     for(int i = 1; i <= n * n; i++) {
//         // বর্তমান সারির জন্য অক্ষর বের করতে (64 + (i-1)/n + 1)
//         cout << (char)(64 + (i - 1) / n + 1) << " ";
        
//         // n সংখ্যক কলাম শেষ হলে নতুন লাইন প্রিন্ট
//         if(i % n == 0) {
//             cout << endl;
//         }
//     }
// } j= no of column;

// 1 22 333 4444 Triangle

// #include<iostream>
// using namespace std;
// int main(){
//     int n,m;
//     cout<<"Enter the starting point : ";
//     cin>>n;
    
//     cout<<"Enter the ending point : ";
//     cin>>m;
//     for(int i=n;i<=m;i++){
//         for(int j=0;j<i;j++)
//         {cout<<i<<" ";}
//         cout<<endl;
//     }
// }

//////////////1 AB 123 ABCD  1234///////////////////////////////////////////////
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a number : ";
//     cin>>n;
//     for(int i=0; i<=n ; i++){
//         for(int j =1; j<=i; j++){
//             if(i%2 == 0) cout<<(char)(64+j)<<" ";
//             else cout<<j<<" ";
//         }
// cout<<endl;
// }
// }
////////////////////////////////////////////////
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a number : ";
//     cin>>n;
//     if(n%2==0) cout<<"Please enter a odd number  ";
//  else {
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n; j++){
//               int x =(n+1)/2;
//             if(i == x || j == x) cout<<"* ";
//             else cout<<"# ";
//         }
//         cout<<endl;
//     }
//  }
 
// }
/////////////making plus 
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a number : ";
//     cin>>n;
//     int mid = n/2 + 1;
//     for(int i=1;i<=n;i++){
//         for(int j=1; j<=n;j++){
//             if(i == mid || j == mid ) cout<<"* ";
//             else cout<<"  ";
//         }
//         cout<<endl;

//     }
// }
/////////// Making Rectangle with stars :
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a number : ";
//     cin>>n;
//     for(int i=1; i<=n ; i++){
//         for(int j=1; j<=n; j++){
//      if(i==1 || i==n) cout<<"*  ";
//      else if(j==1 || j==n) cout<<"*  ";
//      else cout<<"   ";
//     }
//     cout<<endl;
//     }
// }
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(i==j || i + j == n + 1 ) cout<<"* "; // i + j == n + 1 এই সুত্র টা নিজে নিজে বের করতে হবে
            else cout<<"  ";
            
        }
    cout<<endl;
    }
}