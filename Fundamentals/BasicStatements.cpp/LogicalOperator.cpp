
//Teke a + integer & tell if it is divisible by 3  & 5 .
// #include<iostream>
// using namespace std;
//    int main(){ //যেহেতু ভাগ তাই দশমিক আসবে না তাই float দিতে গেলে নতুন কাহিনি করতে হবে
//     int x;
// cout<<"Enter a number : ";
// cin>>x;
// if (x%3==0  && x%5==0) cout<<"This is divisible by 3 & 5 ";
// else cout<<"This is not divisible by 3 & 5";
//  }



//Take three number input and tell if they can be the sides of a triangle :

//  #include<iostream>
//  using namespace std;
//      int main(){
// // float a,b,c,x,y,z;
// //     cout<<"Enter a number : ";
// // cin>>a;
// //      cout<<"Enter a number : ";
// // cin>>b;
// //      cout<<"Enter a number : ";
// // cin>>c;
// //          x=a*b;
// //         y=b*c;
// //         z=c*a;
// // if ((x+y)>z) cout<< "These three number can be the side of a triangle";
// // else cout<< "These three number can't be the side of a triangle";
// //or, 
// float a,b,c;
// cout<< "Enter a side : ";
//            cin>>a;
// cout<< "Enter a side : ";
//            cin>>b;
// cout<< "Enter a side : ";
//         cin>>c;
// if (a+b>c && b+c>a && c+a>b) cout<< "Valid Triangle";
// else cout<< "Invalid Triangle";        
//}


//Take 3+ integers and print the greatest of them   :


#include<iostream>
using namespace std;
         int main(){

int x,y,z; 
    cout<<"Enter a number : ";
         cin>>x;
    cout<<"Enter a number : ";
        cin>>y;
    cout<<"Enter a number : ";
        cin>>z;          

          if (x>y && x>z) cout<<"The greatest of them  is: "<<x;
          else if (y>x && y>z) cout<<"The greatest of them  is: "<<y;
          else cout<<"The greatest of them  is: "<<z;


         }


     