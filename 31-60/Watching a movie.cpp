#include<bits/stdc++.h>
using namespace std;

int find(int n,int x){
int l,r;
int temp=0,ans=0,cur=1;

for(int i=0;i<n;i++){
    cin>>l>>r;
    while(cur<l)
        cur+=x;
    if(cur>l)
        cur-=x;
    temp=cur;
    while(temp++<=r)
        ans++;

    cur=r+1;

}
return ans;
}
int main(){
int n,x;
cin>>n>>x;

cout<<find(n,x)<<endl;
}
