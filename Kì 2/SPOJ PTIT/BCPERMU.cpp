#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int n;
int check[100];
int a[100];
void dq(int k) {
    for (int i = 1; i <= n; i++) {
        if (check[i]==0){
            a[k] = i; 
            check[i] = 1;
            if (k == n){
            	for (int i = 1; i <= n; i++)
                    cout << a[i];
                cout << "\n";
                }
            else dq(k + 1);
        check[i] = 0;
        }
    }
}
int main() {
    cin >> n;
    dq(1);
} 