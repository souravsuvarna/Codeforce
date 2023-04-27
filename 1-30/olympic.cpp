#include<bits/stdc++.h>
using namespace std;

int main(){

int n;
cin>>n;
int k;
queue<int>one;
queue<int>two;
queue<int>three;

for(int i=1;i<=n;i++){
    cin>>k;
    if(k==1)
        one.push(i);
    else if(k==2)
        two.push(i);
    else
        three.push(i);
}

int ans=min((int)one.size(),(int)two.size());
ans=min(ans,(int)three.size());
cout<<ans<<endl;
for(int i=0;i<ans;i++)
{
    cout<<one.front()<<" "<<two.front()<<" "<<three.front()<<endl;
    one.pop();
    two.pop();
    three.pop();
}
return 0;
}
