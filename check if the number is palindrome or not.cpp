#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    int checkPalindrome(int n){
    int rev=0;
    while(n>0){
        int last_digit=n%10;
        n=n/10;
        rev=rev*10+last_digit;
    }
    return rev;}
    };
    int main(){
    Solution obj;
    int n;
    cin>>n;
    if(n==obj.checkPalindrome(n)){
        cout<<"Is Palindrome";}
        return 0;
    }



