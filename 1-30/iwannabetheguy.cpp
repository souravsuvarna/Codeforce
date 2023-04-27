#include<bits/stdc++.h>
using namespace std;

int main(){
int n;
cin>>n;
int it,p,q;

unordered_map<int,int>mp;
cin>>p;
for(int i=0;i<p;i++){
    cin>>it;
    mp[it]++;
}
cin>>q;
for(int i=0;i<q;i++){
    cin>>it;
    mp[it]++;
}

int b=1;
for(int i=1;i<=n;i++){
    if(!mp[i])
        b=0;
}
if(b==1)
    cout<<"I become the guy."<<endl;
else
    cout<<"Oh, my keyboard!"<<endl;
}
