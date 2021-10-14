#include<bits/stdc++.h>
using namespace std;

int main() {
int t;
cin>>t;
while(t--)
{
    long double q,p,d=0,to;
      cin>>q>>p;
    if(q>1000)
    { d=p*0.1;
     to= q*(p-d);
     cout << fixed << setprecision(6) << to<<endl ;
    }
    else
   { to = p*q;
    cout << fixed << setprecision(6) << to<<endl ;  
   }
}
}