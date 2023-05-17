#include<bits/stdc++.h>
using namespace std;

int main(){
int n,k;
cin>>n>>k;
int ans=n,count=0;

while(n-->0){
    int num;
    cin>>num;
    while(num>0){
        if(num%10==4 || num%10==7)
            count++;
        num/=10;
    }
    if(count>k)
        ans--;
    count=0;
}
cout<<ans<<endl;
return 0;
}
