#include<bits/stdc++.h>
using namespace std;

int main() {
int t;
cin>>t;
while(t--)
{
    int a,b,c;
    cin>>a>>b>>c;
    if(b<a && b>c)
    cout<<b<<endl;
    else if( a<b && a>c)
    cout<<a<<endl;
    else if( c<b && c>a)
    cout<<c<<endl;
    else if( a==b==c)
    cout<<a<<endl;
    else if( a>b && a<c)
    cout<<a<<endl;
    else if( c>b && c<a)
    cout<<c<<endl;
    else if(b>a && b<c)
    cout<<b<<endl;
    
}
}