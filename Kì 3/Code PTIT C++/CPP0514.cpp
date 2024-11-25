#include<bits/stdc++.h>
using namespace std;
#define ll long long
struct SinhVien{
    string ten;
    string lop;
    string ns;
    string gpa;
    string ma;
};
string chuanns(string s){
    if (s[1]=='/') s= "0" + s;
    if (s[4]=='/') s.insert(3, "0");
    return s;
}
string chuanten(string s){
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    stringstream tach(s);
    string tmp;
    string ans="";
    while (tach >> tmp){
        tmp[0] = toupper(tmp[0]);
        ans += tmp + " ";
    }
    return ans;
}
void nhap(SinhVien ds[], int n){
    cin.ignore();
    for (int i=0;i<n;i++){
        string tmp = to_string(i+1);
        while (tmp.size()<3) tmp = "0" +tmp;
        ds[i].ma = "B20DCCN" + tmp;
        getline(cin, ds[i].ten);
        ds[i].ten = chuanten(ds[i].ten);
        getline(cin, ds[i].lop);
        getline(cin, ds[i].ns);
        ds[i].ns = chuanns(ds[i].ns);
        getline(cin, ds[i].gpa);
    }
}
void in(SinhVien ds[], int n){
    for (int i=0;i<n;i++){
        cout << ds[i].ma << " " << ds[i].ten << " " << ds[i].lop << " " << ds[i].ns << " ";
        float tmp = stof(ds[i].gpa);
        cout << fixed << setprecision(2) << tmp;
        if (i!=n-1) cout << "\n";
    }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    #ifndef ONLINE_JUGDE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}