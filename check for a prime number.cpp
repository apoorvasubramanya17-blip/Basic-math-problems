#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    int primeNumber(int n){
    int count=0;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            count++;
        }
        if(n/i!=1){
            count++;
        }
    }
    if(count=2){
        cout<<"is prime";
    }}};
    int main(){
    Solution obh;
    int n;
    cin>>n;
    obh.primeNumber(n);
    return 0;}


