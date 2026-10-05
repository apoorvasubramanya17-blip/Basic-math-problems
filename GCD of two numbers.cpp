#include<bits/stdc++.h>
using namespace std;
class solution{
public:
    int GCD(int a,int b){
        while(a>0 && b>0){
            if(a>b){
                a=a%b;}
            else{
                b=b&a;
            }
            }
            if(a==0)return b;
            else return a;}

    };
    int main(){
        solution obj;
    int a,b;
    cin>>a>>b;
    cout<<obj.GCD(a,b);
    return 0;
}
