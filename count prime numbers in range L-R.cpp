#include<bits/stdc++.h>
using namespace std;
int main(){
int l,r;
cin>>l>>r;
vector<bool> isPrime(r+1,true);
isPrime[0]=false;
isPrime[1]=false;
for(int i=2;i*i<=r;i++){
    if(isPrime[i]){
        for(int j=i*i;j<=r;j+=i){n
            isPrime[j]=false;

        }
    }
}
int count=0;
for(int i=l;i<=r;i++){
    if(isPrime[i]){
        count++;
    }
}
cout<<count;
return 0;
}
