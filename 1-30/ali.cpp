#include <bits/stdc++.h>
#include<cctype>
using namespace std;


bool findvowel(char c){
	toupper(c);
return (c=='A' || c=='E' || c=='I' || c=='O' || c=='U'|| c=='Y');

}

string res(string id){
	if(findvowel(id[2]))
		return "invalid";
	if((id[0]-'0'+id[1]-'0')%2!=0 || (id[3]-'0'+id[4]-'0')%2!=0 || (id[4]-'0'+id[5]-'0')%2!=0  || (id[7]-'0'+id[8]-'0')%2!=0 )
		return "invalid";
return "valid";

}


int main() {
	string id;
	cin>>id;
	cout<<res(id)<<endl;
	return 0;
}
