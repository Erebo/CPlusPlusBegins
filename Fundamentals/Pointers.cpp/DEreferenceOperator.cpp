   #include<iostream>
   using namespace std;
   int main(){
   int n;
   cout<<"Enter a number : ";
   cin>>n;
   int* p=&n;
   cout<<n<<endl;
*p = 23;
cout<<n<<endl;
   }