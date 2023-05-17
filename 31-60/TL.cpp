#include<bits/stdc++.h>
using namespace std;

int res(int arr1[],int arr2[],int n,int m){

    if(arr1[n-1]>=arr2[0])
        return -1;
int ans=-1;
    for(int i=arr1[n-1];i<arr2[0];i++){
        if(arr1[0]*2<=i)
        {
            ans=i;
            break;
        }
    }
    return ans;
}

int main(){
int n,m;
cin>>n>>m;
int arr1[n],arr2[m];
    for(int i=0;i<n;i++)
        cin>>arr1[i];
    for(int i=0;i<m;i++)
        cin>>arr2[i];
sort(arr1,arr1+n);
sort(arr2,arr2+m);
cout<<res(arr1,arr2,n,m)<<endl;
return 0;
}
