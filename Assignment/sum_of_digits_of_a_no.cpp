#include<bits/stdc++.h>
using namespace std;

int sum_digit(int num){
    int ans=0;
    int a=0;
    while(num>0){
        a=num%10;
        ans+=a;
        num/=10;
    }
    return ans;
}

int32_t main(){
    int num;
    cin>>num;
    cout<<"sum of digits of given no.= "<<sum_digit(num)<<endl;
}