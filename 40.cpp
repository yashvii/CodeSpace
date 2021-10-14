#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int b;
        cin>>b;
        //assuming b is even 
        //n(n+1)/2
        //n=b/2-1
        int n= (b/2)-1;
        int ans=(n*(n+1))/2;
        cout<<ans<<endl;
    }
}