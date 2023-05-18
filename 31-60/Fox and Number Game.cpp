#include<bits/stdc++.h>
using namespace std;

int main(){
int n;
cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
            cin>>arr[i];
    sort(arr,arr+n);
    int ans=0;
    int num=arr[0];
    for(int i=num;i>0;i--){
        int count=0;
        for(int j=0;j<n;j++){
            if(arr[j]%i==0)
                count++;
        }
        if(count==n)
        {
            ans=i;
            break;
        }
    }

    cout<<ans*n<<endl;
}
