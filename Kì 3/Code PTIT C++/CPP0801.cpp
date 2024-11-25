#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ifstream in;
    in.open("PTIT.in", ios::in);
    ofstream out;
    out.open("PTIT.out", ios::out);
    string s;
    while(getline(in, s)){
        out << s << "\n";
    }
    in.close();
    out.close();
}