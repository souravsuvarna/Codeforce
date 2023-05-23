#include<bits/stdc++.h>
using namespace std;

string res(int a , int b, int sum){
    int temp=1;
    int a1=0,b1=0;

    while(a>0){
        if(a%10!=0)
        {
            a1=a%10*temp+a1;
            temp*=10;
        }
        a/=10;
    }

    temp=1;
    while(b>0){
        if(b%10!=0)
        {
            b1=b%10*temp+b1;
            temp*=10;
        }
        b/=10;
    }

    int sum1=0;
    temp=1;

    while(sum>0){
        if(sum%10!=0)
        {
            sum1=sum%10*temp+sum1;
            temp*=10;
        }
        sum/=10;
    }

    if(a1+b1==sum1)
            return "YES";
    return "NO";

}

int main(){
int a,b;
cin>>a>>b;
cout<<res(a,b,a+b)<<endl;
return 0;
}
