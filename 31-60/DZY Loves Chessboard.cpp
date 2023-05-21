#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    char arr[n][m];

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
                cin>>arr[i][j];
    }

    char c;

    for(int i=0;i<n;i++){
        if(i%2==0)
            c='B';
        else
            c='W';
        for(int j=0;j<m;j++){
            if(arr[i][j]=='.')
                arr[i][j]=c;
            if(c=='B')
                c='W';
            else
                c='B';
        }
    }


    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
                cout<<arr[i][j];
        cout<<endl;
    }
    return 0;

}
