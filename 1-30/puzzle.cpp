#include<bits/stdc++.h>

using namespace std;

int calc(int arr[],int n,int sell){
sort(arr,arr+sell);
int m=INT_MAX;
for(int i=0;i<=sell-n;i++){
      int j=n+i-1;
    m=min(arr[j]-arr[i],m);
}
return m;
}

int main(){
int n,sell;
cin>>n>>sell;
int arr[sell];

for(int i=0;i<sell;i++)
    cin>>arr[i];

cout<<calc(arr,n,sell)<<endl;
return 0;

}
