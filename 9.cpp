#include<bits/stdc++.h>
using namespace std;

int main() {
 int t;
 cin>>t;
 while(t--)
 {
     string n;
     cin>>n;
     
     string ans ="";
     for(int i=n.length()-1;i>=0;i--){
        ans+=n[i];
    }
      int finalAns=stoi(ans);
      cout<<finalAns<<endl;
}
 }