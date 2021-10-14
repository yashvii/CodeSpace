#include<bits/stdc++.h> 
using namespace std;

int main() {
int t;
cin>>t;
while(t--)
{
    int s;
    float hra=0.0,da=0.0;
    float gs;
    cin>>s;
    if(s<1500)
    { hra = s*0.1;
      da = s*0.9;
      gs = hra+da+s;
    cout << fixed << setprecision(2) << gs<<endl; }
    else 
    { hra =500.0;
      da = s*0.98;
      gs = hra+da+s;
   cout << fixed << setprecision(2) << gs<<endl; }
    
}
}
