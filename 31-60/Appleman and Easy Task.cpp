#include<bits/stdc++.h>
using namespace std;

int main(){
int n;
cin>>n;
char arr[n][n];
for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
        cin>>arr[i][j];

for(int i=0;i<n;i++){
        int c=0;
    for(int j=0;j<n;j++){
        if(i-1>=0 && arr[i-1][j]=='o')
            c++;
        if(i+1<n && arr[i+1][j]=='o')
            c++;
        if(j-1>=0 && arr[i][j-1]=='o')
            c++;
        if(j+1<n && arr[i][j+1]=='o')
            c++;
        if(c%2!=0)
            {
                cout<<"NO"<<endl;
                return 0;
            }
    }
}
cout<<"YES"<<endl;
return 0;
}
