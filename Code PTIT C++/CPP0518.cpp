#include <bits/stdc++.h>
using namespace std;
#define ll long long
struct NhanVien
{
    string ma, ten, gt, ns, dc, thue, nk;
};
int d = 0;
void nhap(NhanVien &a)
{
    string tmp = to_string(++d);
    while (tmp.size() < 5)
        tmp = "0" + tmp;
    a.ma = tmp;
    if (d==1) cin.ignore();
    getline(cin, a.ten);
    getline(cin, a.gt);
    getline(cin, a.ns);
    getline(cin, a.dc);
    getline(cin, a.thue);
    getline(cin, a.nk);
}
int nam(string s)
{
    int sonam = (s[6] - '0') * 1000 + (s[7] - '0') * 100 + (s[8] - '0') * 10 + (s[9] - '0');
    return sonam;
}
int thang(string s)
{
    int sothang = (s[3] - '0') * 10 + (s[4] - '0');
    return sothang;
}
int ngay(string s)
{
    int songay = (s[0] - '0') * 10 + (s[1] - '0');
    return songay;
}
int cmp(NhanVien a, NhanVien b)
{
    int nam2 = nam(a.ns);
    int thang2 = ngay(a.ns);
    int ngay2 = thang(a.ns);
    int nam1 = nam(b.ns);
    int thang1 = ngay(b.ns);
    int ngay1 = thang(b.ns);
    if (nam1 > nam2)
        return 1;
    else
    {
        if (nam1 < nam2)
            return 0;
        else
        {
            if (thang1 > thang2)
                return 1;
            else if (thang1 < thang2)
                return 0;
            else
            {
                if (ngay1 > ngay2)
                    return 1;
                else if (ngay1 < ngay2)
                    return 0;
            }
        }
    }
    return 1;
}
void sapxep(NhanVien a[], int n){
    sort(a, a+n, cmp);
}
void inds(NhanVien a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i].ma << " ";
        cout << a[i].ten << " ";
        cout << a[i].gt<< " ";
        cout << a[i].ns << " ";
        cout << a[i].dc << ' ';
        cout << a[i].thue << ' ';
        cout << a[i].nk;
        if (i != n - 1)
            cout << "\n";
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUGDE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    struct NhanVien ds[50];
    int N, i;
    cin >> N;
    for (i = 0; i < N; i++)
        nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}
