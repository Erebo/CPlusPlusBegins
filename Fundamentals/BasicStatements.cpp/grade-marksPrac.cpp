
// #include<iostream>
//  using namespace std;
//     int main(){
// float a;
//   cout<<"Enter your marks : ";
//   cin>>a;
//         if (a >= 81 && a <= 100) cout<<"Very Good";
//         else if (a >= 61 && a <= 80) cout<<"Good";
//         else if (a >= 41 && a <= 60)  cout<<"Average";
//         else cout<<"Fail";
//     }

  ///////////////////////////////

#include<iostream>
 using namespace std;
 int main(){
float x,y;
    cout<<"Enter a point : ";
    cin>>x; cin>>y;
if (x > 0 && y > 0 ) cout<<"Point is in the 1st Quadarant";
 else if ( x < 0 && y > 0 ) cout<<"Point is in the 2nd Quadarant";
else if ( x < 0 && y < 0 )  cout<<"Point is in the 3rd Quadarant";
else if ( x > 0 && y < 0  ) cout<<"Point is in the 4th Quadarant";
else if (x == 0 && y == 0) cout<<"Point is in the origin";
else if (x == 0 && y != 0) cout<<"Point is in the Y axis";
else cout<<"Point is in the X axis ";
}


    