#include<bits/stdc++.h>
using namespace std;
int main(){
    int k,l;
    cin>>k>>l;
    int la=0;
    long long ans=k;

    while(ans<l){
        ans=ans*k;
        la++;
    }
    if(ans-l==0){
        cout<<"YES"<<endl;
        cout<<la<<endl;
    }
    else
        cout<<"NO"<<endl;

}
