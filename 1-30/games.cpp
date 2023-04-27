#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int host[n],guest[n];
    for(int i=0;i<n;i++){
        cin>>host[i];
        cin>>guest[i];
    }
    int res=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j)
                continue;
            else{
                if(host[i]==guest[j])
                    res++;
            }
        }
    }
    cout<<res<<endl;
    return 0;
}
