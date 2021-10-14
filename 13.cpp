#include<bits/stdc++.h>
using namespace std;

int main(){
        int n;
        cin>>n;
        //int a[n],b[n];
        int cumA=0;
        int cumB=0;
        int maxDiff=0;
        int ans=0;
        for(int i=0;i<n;i++){
            int a,b;
            cin>>a>>b;
            cumA+=a;
            cumB+=b;
            if(cumA-cumB>0){
                if(cumA-cumB>maxDiff){
                    maxDiff=cumA-cumB;
                    ans=1;
                }
            }
            else if(cumB-cumA>0){
                 if(cumB-cumA>maxDiff){
                    maxDiff=cumB-cumA;
                    ans=2;
                }
            }
        }
        cout<<ans<<" "<<maxDiff<<endl;

}