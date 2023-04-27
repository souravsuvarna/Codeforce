#include<bits/stdc++.h>
using namespace std;

int main(){
int n,d,song=0,sum=0;
cin>>n>>d;
int k;
    for(int i=0;i<n;i++){
        cin>>k;
        song+=k;
        sum=sum+k+10;
    }
    sum-=10;
    if(sum>d)
        cout<<-1<<endl;
    else{
        d=d-song;
        cout<<(int)d/5<<endl;
    }
    return 0;
}
