#include<bits/stdc++.h>
using namespace std;
class PhanSo{
    private:
        long long tuSo, mauSo;
    public:
        PhanSo(long long tuSo, long long mauSo){
            this->tuSo = tuSo;
            this->mauSo = mauSo;
        }
        friend istream& operator>>(istream &is, PhanSo &ps){
            is >> ps.tuSo >> ps.mauSo;
            return is;
        }
        void rutgon(){
            long long uc = __gcd(tuSo, mauSo);
            tuSo/=uc;
            mauSo/=uc;
        }
        PhanSo operator + (PhanSo ps){
            PhanSo kq(1, 1);
            kq.tuSo = tuSo*ps.mauSo + mauSo*ps.tuSo;
            kq.mauSo = mauSo * ps.mauSo;
            kq.rutgon();
            return kq;
        }
        friend ostream& operator<<(ostream &os, PhanSo &ps){
            os << ps.tuSo << "/" << ps.mauSo;
            return os;
        }
};
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    #ifndef ONLINE_JUGDE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    PhanSo p(1,1), q(1,1);
	cin >> p >> q;
	cout << p + q;
    return 0;
}
