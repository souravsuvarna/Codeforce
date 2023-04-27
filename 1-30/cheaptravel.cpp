#include<bits/stdc++.h>
using namespace std;

int calc(int n, int m, int a, int b){
int tot_sum=n*a;
int sum=b,temp=m;

while(temp<=n){
    temp+=m;
    sum+=b;
}
if(sum<tot_sum)
    tot_sum=sum;
while(temp>n){
    temp-=m;
    sum-=b;
}

while(temp!=n){
    temp++;
    sum+=a;
}
if(sum<tot_sum)
    return sum;
return tot_sum;
}

int main(){
int n,m,a,b;
cin>>n>>m>>a>>b;
cout<<calc(n,m,a,b)<<endl;
return 0;
}
