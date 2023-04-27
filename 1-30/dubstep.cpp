#include<bits/stdc++.h>

using namespace std;

string operate(string in){
    string res="";
    string temp="";
    for(int i=0;i<in.size();){
        if(in[i]=='W' && in[i+1]=='U'   && in[i+2]=='B')
        {
            i+=3;
           res=res+temp;
           if(res.size()!=0)
            temp=" ";
            else
                temp="";
        }
        else{
            temp=temp+in[i];
            i++;
        }
    }
    return res+temp;
}

int main(){
string input;
cin>>input;
cout<<operate(input)<<endl;
return 0;
}
