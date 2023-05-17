#include<bits/stdc++.h>
using namespace std;

int main(){
int n;
cin>>n;
char s[n][n];
int flag=0;
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++)
        cin>>s[i][j];
}
char diag=s[0][0];
char rem=s[0][1];

int k=n-1;
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        if(i==j){
            if(s[i][j]==diag && s[i][k]==diag)
                continue;
            else
                flag=1;
        }
        else if(j!=k){
            if(s[i][j]!=rem)
                    flag=1;
        }

    }
    k--;
}
if(flag==0 && diag!=rem)
    cout<<"YES"<<endl;
else
    cout<<"NO"<<endl;
return 0;
}
