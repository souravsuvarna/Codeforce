#include<bits/stdc++.h>
using namespace std;

int main(){
int x1,x2,y1,y2;
cin>>x1>>y1>>x2>>y2;
int x3=0,y3=0,x4=0,y4=0;

if(x1==y1   &&  x2==y2){
    x3=x1;
    y3=y2;
    x4=x2;
    y4=y1;
}
else if(x1==y2 && x2==y1){
    x3=x2;
    y3=y2;
    x4=x1;
    y4=y1;
}
else if(y2==x1 && y2==y1){
    x3=x1;
    y3=x2;
    x4=x2;
    y4=x2;
}
else if(y1==x2 && y1==y2){
    x3=x1;
    y3=x1;
    x4=x2;
    y4=x1;
}
else if(x1==x2 && y1==x2){
    x3=y2;
    y3=y1;
    x4=y2;
    y4=y2;
}
else if(x1==x2 && x1==y2){
    x3=y1;
    y3=y1;
    x4=y1;
    y4=y2;
}
else{
    cout<<-1<<endl;
    return 0;
}




cout<<x3<<" "<<y3<<" "<<x4<<" "<<y4<<endl;
return 0;
}
