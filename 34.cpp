#include<bits/stdc++.h>
using namespace std;


int main(){
   int a;
   cin>>a;
   int counter=0;
   for(int i=1;i<=a;i++){
       if(a%i==0){
           counter++;
           }
   }
   cout<<counter<<endl;
   for(int i=1;i<=a;i++){
       if(a%i==0)
       cout<<i<<" ";
   }

}