#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    int isAmstrong(int n){
    int dup=n;
    int sum=0;
    while(n>0){n
        int last_digit=n%10;
        n=n/10;
         sum+=last_digit*last_digit*last_digit;}
        if(sum==dup){
            return 1;
        }
        return 0;
    }};
    int main(){
    Solution obj;
    int n;
    cin>>n;
    cout<<obj.isAmstrong(n);
    return 0;}
