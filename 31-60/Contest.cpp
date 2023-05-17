#include<bits/stdc++.h>
using namespace std;

string res(int a, int b, int c, int d){
int m1=max(3*a/10,(a-(a*c/250)));
int m2=max(3*b/10,(b-(b*d/250)));
if(m1==m2)
    return "Tie";
else if(m1>m2)
    return "Misha";
return "Vasya";

}

int main(){
int a,b,c,d;
cin>>a>>b>>c>>d;
cout<<res(a,b,c,d)<<endl;
return 0;
}
