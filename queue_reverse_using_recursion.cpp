#include<iostream>
#include<queue>
#include<stack>
using namespace std;
void reverse(queue<int>&q){
    if(q.empty())return;
    int first=q.front();
    q.pop();
    reverse(q);
    q.push(first);
}
int main(){
queue<int>q;
q.push(10);q.push(20);q.push(30);q.push(40);q.push(50);
reverse(q);
queue<int>temp=q;
while(!temp.empty()){
    cout<<temp.front()<<"  ";
    temp.pop();
}
}