#include<bits/stdc++.h>
using namespace std;

int find(string s, string t){
int index=0;
    for(int i=0;i<t.size();i++){
       if(t[i]==s[index])
            index++;
    }
    return index+1;
}

int main(){
string s,t;
cin>>s>>t;
cout<<find(s,t)<<endl;
return 0;
}
