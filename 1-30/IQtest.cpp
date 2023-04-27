#include<bits/stdc++.h>
using namespace std;

int main(){
int n;
cin>>n;
int number;
int even=0,odd=0,evenIndex=-1,oddIndex=-1;
for(int i=0;i<n;i++){
    cin>>number;
    if(number%2==0)
    {
        even++;
        evenIndex=i+1;
    }
    else{
        odd++;
        oddIndex=i+1;
    }
}

if(even==1)
    cout<<evenIndex<<endl;
else
    cout<<oddIndex<<endl;
    return 0;

}
