#include<bits/stdc++.h>
using namespace std;

string res(string arr[],int n){

    unordered_map<string,int>mp;
    int ma=0;
    string ans="",it="";

    for(int i=0;i<n;i++)
    {   it=arr[i];
        mp[it]++;
        if(mp[it]>ma){
            ma=mp[it];
            ans=it;
        }
    }
    return ans;
}

int main(){
    int n;
    cin>>n;
    string arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<res(arr,n)<<endl;
    return 0;
}
