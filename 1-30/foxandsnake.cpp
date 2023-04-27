#include<bits/stdc++.h>
using namespace std;

void pattern(int n, int m){
int flag=0;
for(int i=1;i<=n;i++){
    for(int  j=1;j<=m;j++){
        if(j==m && flag==0 && i%2==0){
            cout<<"#";

        }
        else if(j==1 && flag==1 && i%2==0){
            cout<<"#";

        }
        else if(i%2==0){
            cout<<".";
        }
        else
            cout<<"#";
    }
    if(i%2==0)
        flag=!flag;
    cout<<endl;
}
}

int main(){
int n,m;
cin>>n>>m;
pattern(n,m);
return 0;
}
