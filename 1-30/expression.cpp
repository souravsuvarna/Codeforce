#include<bits/stdc++.h>

using namespace std;

int ex(int a , int b, int c)
{

    int res=0;

int m1=a+b+c;
int m2=a*b*c;
int m3=(a*b)+c;
int m5=(a+b)*c;
int m4=a+(b*c);
int m6=a*(b+c);

m1=max(m1,m2);
m3=max(m3,m4);
m5=max(m5,m6);
m1= max(m1,m3);
return max(m1,m5);
}

int main(){

int a,b,c;

cin>>a>>b>>c;

cout<<ex(a,b,c)<<endl;

return 0;
}
