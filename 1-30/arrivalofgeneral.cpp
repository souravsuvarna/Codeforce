#include<bits/stdc++.h>
using namespace std;

int find(int arr[],int n){
int ma=INT_MIN,mi=INT_MAX;
int maxIndex,minIndex;
for(int i=0;i<n;i++){
    if(arr[i]>ma){
        ma=arr[i];
        maxIndex=i;
    }
}

int res=0;

for(int i=maxIndex;i>0;i--){
    swap(arr[i],arr[i-1]);
    res++;
}


for(int i=n-1;i>=1;i--){
        if(arr[i]<mi){
        mi=arr[i];
        minIndex=i;
    }
}



for(int i=minIndex;i<n-1;i++){
    swap(arr[i],arr[i+1]);
    res++;
}

return res;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<find(arr,n)<<endl;
    return 0;
}
