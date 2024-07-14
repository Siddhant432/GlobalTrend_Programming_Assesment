#include<bits/stdc++.h>
using namespace std;

int len_Of_LongestSubstring(string s) {
        unordered_map<char,int>mp;
        int l=0,ans=0;
        for(int i=0;i<s.length();i++){
            if(mp.count(s[i])==0 || mp[s[i]]<l){
                mp[s[i]]=i;
                ans=max(ans,i-l+1);
            }
            else {
                l=mp[s[i]]+1;
                mp[s[i]]=i;
            }
        }
        return ans;
    }

int32_t main(){
    string s;
    cin>>s;
    cout<<len_Of_LongestSubstring(s);

}