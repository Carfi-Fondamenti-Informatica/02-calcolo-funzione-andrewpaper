#include <iostream>
using namespace std;
int main() {
   float a=0, b=0, x=0, y=0, z=0;  
   cin >>a, cin >>b, cin>>x, cin>>y;  
   if ((x<0)&&(y>0)){   
      z=(a*x)-(b*y);
      cout<<z<<endl;   
   }else if ((x>=0)&&(y<=0)){   
      z=(a*x*x)-(b*y);
      cout<<z<<endl;
   }else{
      z=(a*x)+(b*y*y);
      cout<<z<<endl;
   }   
   return 0;
}
