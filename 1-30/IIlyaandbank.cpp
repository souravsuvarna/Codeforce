#include<bits/stdc++.h>
using namespace std;

int calc(int n){
    if(n<=0){
        int rem=n%10;
        int temp1=n/10;
        n=temp1/10;
        int temp2=n*10+rem;
        if(temp1>temp2)
                return temp1;
        return temp2;

    }
    else
        return n;
}

int main(){
int n;
cin>>n;
cout<<calc(n)<<endl;
return 0;
}
