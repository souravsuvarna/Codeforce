#include<bits/stdc++.h>
#include <cctype>
#include <string>
#include<algorithm>
using namespace std;

bool vowel(char c){
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='y')
        return 1;
    return 0;
}
int main()
{
    string in;
    cin>>in;
    string out;
    for(int i=0;i<in.size();i++){
        in[i]=tolower(in[i]);
        if(vowel(in[i]))
            continue;
        else
            out=out+"."+in[i];
    }
    cout<<out<<endl;
    return 0;

}
