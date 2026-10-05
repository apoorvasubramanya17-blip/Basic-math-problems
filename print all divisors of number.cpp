#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    int printDivisors(int n){
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0){
            cout<<i<<" ";

         if(n/i!=i){
            cout<<n/i<<" ";
        }}
    }}};
    int main(){
    Solution obj;
    int n;
    cin>>n;
    obj.printDivisors(n);
    return 0;
    }
