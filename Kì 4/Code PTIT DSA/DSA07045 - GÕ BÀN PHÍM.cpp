#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s;
    cin >> s;
    stack<char> st;
    stack<char> ans;
    int n=s.size();
    for (int i=0;i<n;i++){
        if (s[i]=='>'){
            if (ans.size()){
                st.push(ans.top());
                ans.pop();
            }
        }
        else
            if (s[i]=='<'){
                if (st.size()){
                    ans.push(st.top());
                    st.pop();
                }
            }
            else
                if (s[i]=='-'){
                    if (st.size()) st.pop();
                }
                else
                    st.push(s[i]);
    }
    while (st.size()){
        ans.push(st.top());
        st.pop();
    }
    while (ans.size()){
        cout << ans.top();
        ans.pop();
    }
}