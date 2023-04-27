#include<bits/stdc++.h>
using namespace std;

string operate(string s){
string temp="hello";
int j=0,c=0;
    for(int i=0;i<s.size();i++){
        if(s[i]==temp[j]){
            j++;
            c++;
        }
    }
    if(c==5)
        return "YES";
    return "NO";
}

int main(){
    string s;
    cin>>s;
    cout<<operate(s)<<endl;
    return 0;
}
