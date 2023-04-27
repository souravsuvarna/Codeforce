#include <iostream>
using namespace std;
int main() {
	int num;
	long long product =1;

	cin>>num;
	int a;
	while(num--){
		cin>>a;
		product=(product*a)%1000000007;
	}

	cout<<product<<endl;
	return 0;
}
