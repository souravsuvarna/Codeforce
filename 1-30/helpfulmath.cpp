#include<bits/stdc++.h>
using namespace std;

string compute(string s){
    int c1=0,c2=0,c3=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='1')
            c1++;
        else if(s[i]=='2')
            c2++;
        else if(s[i]=='3')
            c3++;
    }
    string res="";
    while(c1>0 or c2>0 or c3>0){
        if(c1-->0)
            res=res+'1';
        else if(c2-->0)
            res=res+'2';
        else if(c3-->0)
            res=res+'3';

        res=res+'+';
        }
    res.pop_back();
    return res;
}

int main(){

    string s;
    cin>>s;
    cout<<compute(s)<<endl;
    return 0;
}
