// #include<iostream>
// using namespace std;
// int main(){
// float x,y,a,b;
//       cout<<"Length of the rectangle : ";
//       cin>>x;
//       cout<<"Breath of the rectangle : ";
//       cin>>y;89
//       a = x * y;
//     b = 2 * (x + y);

//       cout<<"The area of the rectangle : "<< a <<"\n";
//       cout<<"The perimeter of the rectangle : " <<b <<"\n";
//       if (a>b) cout<<"The area of the rectangle > The perimeter of the rectangle"; 
// else cout<<"The area of the rectangle < The perimeter of the rectangle";


//   }

// #include<iostream>
//  using namespace std;
//       int main(){

// int x;
//         cout<<"Enter a number : ";
//             cin>>x;
//   if (x%3 == 0 || x%5 ==0  && x%15 !=0)   cout<< "Valid";
//   else cout<<"Invalid";       


//       }
//////////////////////////////////////////////////////////////////////////////////////////
// #include<iostream>
//  using namespace std;
//       int main(){
//         int x = 3,y,z;
//         y = x =10;///(Calculate Right to Left it means 10=x=y)
//         z = x<10;// x<10 meaning 10<10 which is false so z=0 as false=0 & true=1
//         cout<<x<<" "<<y<<" "<<z;
//         // x=10 space y=10 space z=0
//       }

// Find the highest factor of a numer n other than it self

//  #include<iostream>
//  using namespace std;
//  int main(){
//  int n,x;  
//   cout<<"Enter a nunber : ";
//   cin>>n;

// {////////////////////////////////////////////////////////bhul
//   /* code */
// }
//  (n%x == 0 && x < 0 ) { cout<<"The highest factor of n is : "<<x;

// }
// //  }
//  int n;
//  cout<<"Enter a number : ";
//    cin>>n;
//    int f=1; /// for storing the highest factor
// for (int i=1; i<n; i++)//{ if (n%i == 0) cout<<i<<endl;}
//     {if (n%i == 0) f=i;
//     }
//     cout<<"The highest factor of n without n is : "<<f;
//     }


// WAP to print sum of all the even digits of a given number

// #include<iostream>
// using namespace std;
// int main(){
// int n;
// cout<<"Enter a number : ";             ctrl + z = undo delete
// cin>>n;
// int i=0;
// while(n != 0){
//   int ld = n%10;
//   if(ld%2 == 0 )
//   i += ld;
//   n /= 10;
// }
//   if(i>0) cout<<"The sum of all the even digits : "<<i;
// else cout<<"There is no even digits ";

// }

// //WAP to print the sum of given number and its reverse
// #include<iostream>
// using namespace std;
// int main(){
//   int n,OG;
//   cout<<"Enter a number : ";
//   cin>>n;
//   OG = n;
// int reverse = 0;
// while(n != 0 ){
//   int ld;
//   ld = n%10;
//   reverse = (reverse*10)+ld;
//   n /= 10;
// }
// cout<<"The sum of given number and it's reverse is : "<< (OG+reverse);
// }
//Find the sum of 1 to n ;
// #include<iostream>
// using namespace std ;
// int main(){
//   int n ;
//   cout<<"Enter a number : ";
//   cin>>n;
//   int i=0;
//     int sum=0;
//   while(i <= n){
//     sum += i ;
//      i++;
// }
// cout<< sum;
// }
// }
// #include<iostream>
// int main(){
//   int n;
//   cout<<"Enter a number : ";
//   cin>>n;
//   int sum= 0;
//   for(int i=0; i <= n ; i++){
//     sum += i;
//   }
//   cout<<sum;
// }
//WAP all the ASCII value of the 26 alphabes;
#include<iostream>
using namespace std;
int main(){
  int ascii=65;
  while(ascii <= 90){
char n=char(ascii);
    cout<<n<<"="<<ascii;
 ascii ++;

  }
}