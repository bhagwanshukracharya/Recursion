#include<iostream>
using namespace std;
bool palindrome(string &str,int s,int e){
    if(s>=e)return true;
    if(str[s]!=str[e])return false;
    else{return palindrome(str,++s,--e);}
}
int main()
{   string str="N O O N";int s=0,e=str.length()-1;
    palindrome(str,s,e)?cout<<"is Palindrome!!":cout<<"not a Palindrome!! "; 
}