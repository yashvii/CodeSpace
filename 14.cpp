#include <iostream>
using namespace std;

int main() {

	long T;
	cin>>T;
	while(T--)
	{
	    long long n;
	    cin>>n;
	    long long f= 1;
	    for(long long i= 1 ;i<=n;i++ )
	    {
	       f=f*i; 
	    }
	    cout<<f<<endl;
	}
}
