#include<bits/stdc++.h>
using namespace std;

int main() {
int x;
float y;
	cin>>x>>y;
float b = y-(x+0.50);
	if(x%5==0 && y>=x+0.50)
	{
	    cout<<b;
	}
	else
 cout << fixed << setprecision(2) << y;
}