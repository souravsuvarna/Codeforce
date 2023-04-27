#include <bits/stdc++.h>

using namespace std;

int compute(string s1,string s2){
    if(s1==s2)
        return 0;
    for(int i=0;i<s1.size();i++){
        s1[i]=tolower(s1[i]);
        s2[i]=tolower(s2[i]);
        if(s1[i]<s2[i])
            return -1;
        else if(s1[i]>s2[i])
            return 1;
        else
            continue;
    }
    return 0;
}
int main(){
    string s1,s2;
    cin>>s1>>s2;
    cout<<compute(s1,s2)<<endl;
    return 0;
}
