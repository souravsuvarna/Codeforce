#include<bits/stdc++.h>
using namespace std;

int res(int a){

    int count=0;
    int n;
    while(1){
            n=abs(a);
        while(n>0){
            if(n%10==8 && count>0)
                    return count;

            n/=10;
        }
        count++;
        a++;
    }
    return -1;

}

int main(){
int a;
cin>>a;
cout<<res(a)<<endl;
return 0;
}
