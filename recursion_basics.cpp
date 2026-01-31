#include<iostream>
using namespace std;
int power(int n){
    if(n==0)return 1;
    return 2*power(n-1);
    }
int fact(int n){
    if(n==0)return 1;
    return n*fact(n-1);
}
void count(int n){
    if(n==0)return;
    count(n-1) ;
    cout<<n<<"  ";
}
void reverse_count(int n){
    if(n==0)return;
    cout<<n<<"  ";
    reverse_count(n-1) ;
}
int main (){
    int n=5;
    cout<< "the value 2 to the power "<<n<< " is :-  "<<power(n)<<endl;
    cout<< "the value factorial "<<n<< " is :-  "<<fact(n);
    cout<<"\ncounting till "<<n<<" is:- "<<endl;count(n);
    cout<<"\nreverse counting from "<<n<<" is:- "<<endl;reverse_count(n);
}