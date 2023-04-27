#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int c=0;
    while(true){
        n--;
        m--;
        if((n<=1 && m<1 || n<1 && m<=1 )|| n==0 || m==0){
            if(c==0)
                {
                    cout<<"Akshat"<<endl;
                    return 0;
                }
            else{
                    cout<<"Malvika"<<endl;
                    return 0;
            }
        }
        c=!c;

    }
    return 0;
}
