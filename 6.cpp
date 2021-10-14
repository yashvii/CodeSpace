#include<bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--)
	{
	    int N;
	    cin>>N;
	    int ld,fd;
	    int sum = 0;
	        ld= N%10;
	        string s=to_string(N);
            fd=N/pow(10,(s.length()-1));
            sum = ld+fd;
            cout<<sum<<endl; 
	    
	}
}
