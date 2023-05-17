#include<bits/stdc++.h>
using namespace std;
int main(){

int n, k, l , c,d, p,nl,np;
cin>>n>>k>>l>>c>>d>>p>>nl>>np;
int tot_litre=k*l;
int tot_slice=c*d;
int ans=min(tot_litre/nl,tot_slice);
ans=min(ans,p/np)/n;
cout<<ans<<endl;
return 0;

}
