#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;
int main()
{
   int a=0,b=0,c=0;
   double delta=0;
   double x1=0,x2=0;
   cout<<"Please Enter a \n";
   cin>>a;
   cout<<"Please Enter b \n";
   cin>>b;
   cout<<"Please Enter c \n";
   cin>>c;
   
   delta=(b*b)-(4*a*c);
   
   if (delta<0){
       cout<<"There are no real roots.";
       }
    else if(delta==0){
        x1=(-1*b)/(2*a);
        cout<<"There is one real root. \n";
        cout<<x1;
         }   
        
    else{
        delta= sqrt(delta);
        
        x1=((-1*b)+delta)/(2*a);
        x2=((-1*b)-delta)/(2*a);
        cout<<"There are two real roots. \n";
        cout<<"First root is : \n";
        cout<<x1;
        cout<<"Second root is : \n";
        cout<<x2;
         }
   
     system("pause");     
}
