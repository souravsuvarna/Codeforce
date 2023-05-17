#include<bits/stdc++.h>
using namespace std;

int main(){
int n;
cin>>n;
if(n%2==1)
    cout<<-1<<endl;
else
{
    int s=1;
    while(s<=n)
    {
        if(s%2==1)
            cout<<s+1<<" ";
        else
            cout<<s-1<<" ";
        s++;

    }

}
return 0;
}
