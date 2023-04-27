#include<bits/stdc++.h>

using namespace std;

int calc(string in){
unordered_map<char,int>mp;
int count=0;
for(int i=0;i<in.size();i++){

    if(in[i]>='a'&&in[i]<='z' )
    {
        if(mp[in[i]]++==0)
                count++;
    }
}
return count;
}

int main(){
string in;
getline(cin,in);
cout<<calc(in)<<endl;
return 0;
}
