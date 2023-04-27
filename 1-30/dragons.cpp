#include<bits/stdc++.h>
using namespace std;
unordered_map<int,int>mp;
string calc(int s,int n, vector<pair<int,int>>v){
for(int i=0;i<n;i++){
    if(s>v[i].first){
        s+=v[i].second;;
    }
    else
        return "NO";
}
return "YES";
}

int main(){
int s,n;
cin>>s>>n;
vector<pair<int,int>>v;
int st,d;
for(int i=0;i<n;i++){
    cin>>d;
    cin>>st;
    v.push_back(make_pair(d,st));

}
sort(v.begin(),v.end());
cout<<calc(s,n,v)<<endl;
return 0;
}
