#include<bits/stdc++.h>
using namespace std;

bool alpha(string s){
    bool x=true;
    for(int i=0;i<s.length();i++){
        if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z') && s[i]!=' ') continue;
        else {
            x=false;
            break;
        }
    }
    return x;
}

int32_t main(){
    string s;
    cin>>s;
    cout<<alpha(s)<<endl;
}