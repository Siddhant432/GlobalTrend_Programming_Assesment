#include<bits/stdc++.h>
using namespace std;

int max_diff(vector<int>&v){
    sort(v.begin(),v.end());
    if(v.size()<2)return -1;
    return v[v.size()-1]-v[0];
}

int32_t main(){
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    cout<<"max_differnce= "<<max_diff(v)<<endl;
}