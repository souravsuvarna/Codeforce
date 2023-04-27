#include<bits/stdc++.h>

using namespace std;

int main(){
int n;
cin>>n;
int i,j,k;
int fi=0,se=0,th=0;
while(n--){
    cin>>i;
    fi+=i;
    cin>>j;
    se+=j;
    cin>>k;
    th+=k;
}
if(fi==0 and se==0 and th==0)
    cout<<"YES"<<endl;
else
    cout<<"NO"<<endl;
return 0;
}
