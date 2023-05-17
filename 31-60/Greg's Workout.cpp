#include<bits/stdc++.h>
using namespace std;

string result(int arr[],int n){
    int c=0,bi=0,ba=0;
    for(int i=0;i<n;i+=3)
        c+=arr[i];
    for(int i=1;i<n;i+=3)
        bi+=arr[i];
    for(int i=2;i<n;i+=3)
        ba+=arr[i];

    if(c>bi && c>ba)
        return "chest";
    else if(bi>c && bi>ba)
        return "biceps";
    else
        return "back";
}

int main(){
int n;
cin>>n;
if(n<=2){
    int a,b;
    cin>>a>>b;
    if(a>b)
        cout<<"chest"<<endl;
    else
        cout<<"biceps"<<endl;
return 0;
}
int arr[n];

for(int i=0;i<n;i++)
        cin>>arr[i];
cout<<result(arr,n)<<endl;
return 0;
}
