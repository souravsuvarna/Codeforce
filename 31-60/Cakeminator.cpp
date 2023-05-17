#include<bits/stdc++.h>
using namespace std;

int main(){
int n,m;
cin>>n>>m;
char arr[n][m];
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>arr[i][j];
    }
}

int flag=0;
int ans=0;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]=='S')
                    flag=1;

        }
        if(flag==0){
            for(int k=0;k<m;k++){
                ans++;
                arr[i][k]='o';
        }
        }
        flag=0;
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(arr[j][i]=='S')
                flag=1;
        }
        if(flag==0){
            for(int k=0;k<n;k++){
                if(arr[k][i]!='o')
                {
                    ans++;
                    arr[k][i]='o';
                }
            }
        }
        flag=0;
    }

    cout<<ans<<endl;
    return 0;

}
