#include<bits/stdc++.h>
using namespace std;

int main(){
long long n,k;
cin>>n>>k;
long long mid=0;
if(n%2==0)
    mid=n/2;
else
    mid=n/2+1;
if(k>mid){
    k=k-mid;
     cout<<2*k<<endl;
}

else
    cout<<2*k-1<<endl;
return 0;
}
