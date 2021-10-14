#include <iostream>
using namespace std;

int main() {
int T;
cin>>T;
while(T--)
{
    int N;
    cin>>N;
    int sum=0;
    int m;
    while(N>0)
   { m= N%10;
    sum = sum + m;
    N = N/10;}
    cout<<sum<<endl;
}
}
