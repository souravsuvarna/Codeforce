#include<bits/stdc++.h>
using namespace std;

int result(int arr[],int n,int c){

int res=0;
for(int i=0;i<n-1;i++)
    res=max(res,arr[i]-arr[i+1]-c);
return res;

}

int main(){
int n,c;
cin>>n>>c;
int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
cout<<result(arr,n,c)<<endl;
return 0;
}
