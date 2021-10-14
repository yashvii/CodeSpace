#include <iostream>
using namespace std;

int main() {
long long n,se,so;
cin>>n;
se= n/2*(4+(n-1)*2);
so= n/2*(2+(n-1)*2);
if(n==1)
{se=2;
so=1;}

cout<<so<<" "<<se;
}