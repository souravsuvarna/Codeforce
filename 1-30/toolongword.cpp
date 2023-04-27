#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    string out="";
    cin>>t;
    while(t>0){
        string s;
        cin>>s;
        int num=0;;
        for(int i=0;i<s.size();i++){
            num++;
        }
        if(num>10){
            num-=2;
            out=s[0]+to_string(num)+s[s.size()-1];
        }
        else
            out=s;
        cout<<out<<endl;
        t--;
    }
return 0;
}
