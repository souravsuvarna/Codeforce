#include<bits/stdc++.h>
using namespace std;


int process(int sum, queue<int>q,int n,int m){
    int x=0;
    while(q.size()%m!=0){
        x=q.front();
        q.pop();
        sum=sum-x;
        while(sum!=n){
            q.push(1);
            sum++;
        }
    }
    return q.size();
}

int find (int n, int m){
    if(n<m)
        return -1;
    queue<int>q;
    int x=2,sum=0;
    while(sum!=n){
        q.push(x);
        sum+=x;
        if(sum>n){
            q.pop();
            sum=sum-x;
            x=1;
        }
    }
return process(sum,q,n,m);
}

int main(){
int n,m;
cin>>n>>m;
cout<<find(n,m)<<endl;
return 0;
}

//Refer :- https://github.com/jackiehluo/practice/blob/master/codeforces/400s/476a-dreamoon-and-stairs.cpp
