#include<bits/stdc++.h>
using namespace std;


void rotate(vector<int>&v, int k) {
    for(int i=0;i<k;i++){
        int temp=v[v.size()-1];
        for(int i=v.size()-2;i>=0;i--){
            v[i+1]=v[i];
        }
        v[0]=temp;
    }
        
}

int32_t main(){
    int n,k;
    cin>>n>>k;
    vector<int>v;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    rotate(v,k);
    cout<<"After rotation"<<endl;
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}