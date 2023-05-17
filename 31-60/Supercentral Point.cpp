#include<bits/stdc++.h>
using namespace std;

int find(int arr[][2],int n){
int ans=0,f_1=0,f_2=0,f_3=0,f_4=0;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){

            if(arr[i][0]<arr[j][0] && arr[i][1]==arr[j][1])
                f_1=1;
            else if(arr[i][0]>arr[j][0] && arr[i][1]==arr[j][1])
                f_2=1;
            else if(arr[i][0]==arr[j][0] && arr[i][1]>arr[j][1])
                f_3=1;
            else if(arr[i][0]==arr[j][0] && arr[i][1]<arr[j][1])
                f_4=1;
        }
        if(f_1==1 and f_2==1 and f_3==1 and f_4==1)
                ans++;
        f_1=0;
        f_2=0;
        f_3=0;
        f_4=0;
    }
    return ans;
}

int main(){
int n;
cin>>n;
int arr[n][2];
for(int i=0;i<n;i++){
    cin>>arr[i][0]>>arr[i][1];
}

cout<<find(arr,n)<<endl;
return 0;
}
