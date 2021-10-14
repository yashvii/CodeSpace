#include<bits/stdc++.h> 
using namespace std;

int main() {
int ns;
cin>>ns;
int ce=0 , co=0;
while(ns--)
{
int w;
cin>>w;
if(w%2==0)
  ce++;
 else
  co++;
 
}
 if (ce<=co)
    cout<<"NOT READY"<<endl;
  else
  cout<<"READY FOR BATTLE"<<endl;
}