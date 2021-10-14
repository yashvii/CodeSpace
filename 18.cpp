#include <iostream>
using namespace std;

int main() {
int t;
cin>>t;
while(t--)
{
    int a,b,max,sum;
    cin>>a>>b;
    if(a>b)
   max = a;
    else
    max = b;
  sum = a+b;
    cout<<max<<" "<<sum<<endl;
}