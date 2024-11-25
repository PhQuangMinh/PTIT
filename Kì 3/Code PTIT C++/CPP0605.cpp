#include<bits/stdc++.h>
using namespace std;
class PhanSo{
    private:
        long long tuSo, mauSo;
    public:
        PhanSo(int tuSo, int mauSo){
            this->tuSo = tuSo;
            this->mauSo = mauSo;
        }
        friend istream& operator>>(istream &is, PhanSo &ps){
            is >> ps.tuSo >> ps.mauSo;
            return is;
        }
        friend ostream& operator<<(ostream &os, PhanSo &ps){
            os << ps.tuSo << "/" << ps.mauSo;
            return os;
        }
        void rutgon(){
            long long uc = __gcd(tuSo, mauSo);
            tuSo/=uc;
            mauSo/=uc;
            if (tuSo<0 && mauSo<0){
                tuSo=-tuSo;
                mauSo=-mauSo;
            }
            if (tuSo>0 && mauSo<0){
                tuSo=-tuSo;
                mauSo-=mauSo;
            }
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
    PhanSo p(1, 1);
    cin >> p;
    p.rutgon();
    cout << p;
    return 0;
}
