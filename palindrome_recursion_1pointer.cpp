#include<iostream>
using namespace std;
bool palindrome(string &str,int i,int n){
    if(i>=n/2)return true;
        if(str[i]!=str[n-i])return false;
             return palindrome(str,++i,n);
    }

int main()
{   string str="N O O N";int i=0,n=str.length()-1;
    palindrome(str,i,n)?cout<<"\nis Palindrome!!\n":cout<<"\nnot a Palindrome!!\n "; 
}