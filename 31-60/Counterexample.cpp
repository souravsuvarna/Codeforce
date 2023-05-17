#include<bits/stdc++.h>
using namespace std;



int main(){
    long long int l,r,a,b,c;
    cin>>l>>r;
   a=l;

    if(a%2!=0)
        a++;

   if(a+2<=r)
       cout<<a<<" "<<a+1<<" "<<a+2<<endl;
   else
        cout<<-1;
    return 0;
}
