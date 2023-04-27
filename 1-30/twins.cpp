#include<bits/stdc++.h>
using namespace std;

int compute(int arr[],int n,int sum){
int res=0,temp=0;
sort(arr,arr+n);
for(int i=n-1;i>=0;i--)
{
    temp+=arr[i];
    sum-=arr[i];
    res++;
    if(temp>sum)
        return res;
}
    return 0;
}

int main(){
int n;
cin>>n;
int arr[n],sum=0;

for(int i=0;i<n;i++){
    cin>>arr[i];
    sum+=arr[i];
}

cout<<compute(arr,n,sum)<<endl;
return 0;
}
