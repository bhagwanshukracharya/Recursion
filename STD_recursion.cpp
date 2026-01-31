#include<iostream>
using namespace std;
void STD(int src,int des){
    if(src==des){cout<<"laut ke buddhu ghar ko aaye !!";return;}
    cout<<"source updated to :- "<<src<<endl;
    src++;
    STD(src,des);

}
int main(){int s=0,d=10;
    STD(s,d);

}