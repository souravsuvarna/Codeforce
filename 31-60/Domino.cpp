#include<bits/stdc++.h>
using namespace std;

int find(int up[], int low[],int n){
    int upsum=0,lowsum=0;
    for(int i=0;i<n;i++){
        upsum+=up[i];
        lowsum+=low[i];
    }
int ans=0;
if(upsum%2==0 && lowsum%2==0)
        return 0;
else{
    for(int i=0;i<n;i++){
        upsum-=up[i];
        lowsum-=low[i];
        swap(up[i],low[i]);
        upsum+=up[i];
        lowsum+=low[i];
        ans++;
        if(upsum%2==0 && lowsum%2==0)
                return ans;
        else{
            ans--;
            upsum-=up[i];
            lowsum-=low[i];
            swap(up[i],low[i]);
            upsum+=up[i];
            lowsum+=low[i];

        }
    }
}
return -1;
}

int main(){
    int n;
    cin>>n;
    int up[n],low[n];
    for(int i=0;i<n;i++){
        cin>>up[i]>>low[i];
    }
cout<<find(up,low,n)<<endl;
return 0;
}
