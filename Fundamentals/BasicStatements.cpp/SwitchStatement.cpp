// Create a calculator using switch statement.The calc should take two number and one operator from the user
// #include<iostream>
// using namespace std;
//  int main(){
// float a;
// cin>>a;
// char b;
// cin>>b;
// float c;
// cin>>c;
// if (b == '+') cout<< a+c;
// if  (b == '-') cout<< a-c;
// if (b == '*' ) cout<< a*c;
// if (b == '/') cout<< a/c;
//  }
 // Using switch statement

//  #include<iostream>
// using namespace std;
//  int main(){
// float a;
// cin>>a;
// char b;
// cin>>b;
// float c;
// cin>>c;
//  case '+' :
//     cout<< a+c<<endl;
//      break;
//  case '-' :
//      cout<< a-c<<endl;
//      break;
//  case '*' :
//     cout<< a*c<<endl;
//     break;
//  case '/' :
//     cout<< a/c<<endl;
//      break;
// default :
// cout<<"Invalid Operator";
//  }
#include<iostream>
using namespace std;

int main() {
    float a, c;
    char b;

    // Input for two numbers and the operator
    cin >> a >> b >> c;

    // Switch case for the operator
    switch(b) {
        case '+':
            cout << a + c << endl;
            break;
        case '-':
            cout << a - c << endl;
            break;
        case '*':
            cout << a * c << endl;
            break;
        case '/':
            if (c != 0)  // Check to avoid division by zero
                cout << a / c << endl;
            else
                cout << "Error: Division by zero" << endl;
            break;
        default:
            cout << "Invalid Operator" << endl;
    }

    return 0;
}
