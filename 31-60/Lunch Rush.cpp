#include<bits/stdc++.h>
using namespace std;

int main(){
int n,k;
cin>>n>>k;
int res=INT_MIN;
while(n--!=0){
    int f,t;
    cin>>f>>t;
    if(t>k)
        res=max(res,f-(t-k));
    else
        res=max(res,f);
}
cout<<res<<endl;
return 0;
}
