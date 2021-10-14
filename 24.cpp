#include <iostream>
using namespace std;

int main() {
int t;
cin>>t;
while(t--)
{
    int sum =0;
    int d,n;
    cin>>d>>n;
    sum = n;
    while(d--)
    {
    sum = (sum*(sum+1))/2 ;
  
}
    cout<<sum<<endl;
}
}
