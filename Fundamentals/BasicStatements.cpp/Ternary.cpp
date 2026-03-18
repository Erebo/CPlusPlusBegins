///  (condition) ? if true : if false ;
//               ? cout     : cout ;


// #include<iostream>
//  using namespace std;
//  int main(){
// float x,y;
//     cout<<"Enter a point : ";
//     cin>>x; cin>>y;
// if (x > 0 && y > 0 ) cout<<"Point is in the 1st Quadarant";
//  else if ( x < 0 && y > 0 ) cout<<"Point is in the 2nd Quadarant";
// else if ( x < 0 && y < 0 )  cout<<"Point is in the 3rd Quadarant";
// else if ( x > 0 && y < 0  ) cout<<"Point is in the 4th Quadarant";
// else if (x == 0 && y == 0) cout<<"Point is in the origin";
// else if (x == 0 && y != 0) cout<<"Point is in the Y axis";
// else cout<<"Point is in the X axis ";
// }
// #include<iostream>
//  using namespace std;
//       int main(){

// int x;
//         cout<<"Enter a number : ";
//             cin>>x;
//    ((x%3 == 0 || x%5 ==0 ) &&  (x%15 !=0)) ?  cout<< "Valid" : cout<<"Invalid";       


//       }
#include <iostream>
using namespace std;

int main() {
    float x, y;

    // Input: Point coordinates
    cout << "Enter the coordinates of the point (x y): ";
    cin >> x >> y;

    // Determine the location of the point using ternary operators
    string location = (x > 0 && y > 0) ? "Point is in the 1st Quadrant" :
                      (x < 0 && y > 0) ? "Point is in the 2nd Quadrant" :
                      (x < 0 && y < 0) ? "Point is in the 3rd Quadrant" :
                      (x > 0 && y < 0) ? "Point is in the 4th Quadrant" :
                      (x == 0 && y == 0) ? "Point is at the origin" :
                      (x == 0) ? "Point is on the Y-axis" :
                      "Point is on the X-axis";

    // Output the result
    cout << location << endl;


    return 0;
}
