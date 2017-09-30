
#include <iostream>
using namespace std;
int main()
{ int a,b;
cin>>a>>b;
if(a>b)
 { for(int n=b;n>=1;n--)
   {if(a%n==0 && b%n==0)
     {cout<<n;
     break;}
   }
 }
else

 { for(int n=a;n>=1;n--)
   {if(a%n==0 && b%n==0)
     {cout<<n;
     break;}
   }
 }
        return 0;
}
