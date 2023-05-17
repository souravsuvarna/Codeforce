#include<bits/stdc++.h>
using namespace std;

void calc(int n,int v){
int ans=0,p,q,flag=0;
vector<int>res;

    for(int i=1;i<=n;i++){
        cin>>p;
        for(int j=0;j<p;j++){
            cin>>q;
            if(q<v && flag==0)
            {
                ans++;
                res.push_back(i);
                flag=1;
            }
        }
        flag=0;
    }

    cout<<ans<<endl;
    for(int i=0;i<ans;i++)
        cout<<res[i]<<" ";

}

int main(){
int n,v;
cin>>n>>v;
calc(n,v);
return 0;
}
