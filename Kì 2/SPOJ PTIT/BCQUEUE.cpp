#include<bits/stdc++.h>
using namespace std;
int main(){
    queue<int> qu;
    int n;
    cin >> n;
    while (n--){
        int x;
        cin >> x;
        switch (x)
        {
        case 1:{
            cout << qu.size() << "\n";
            break;
        }
        case 2:{
            if (qu.size()) cout << "NO\n";
            else cout << "YES\n";
            break;
        }
        case 3:{
            int a;
            cin >> a;
            qu.push(a);
            break;
        }
        case 4:{
            if (qu.size())  qu.pop();
            break;
        }
        case 5:{
            if (qu.size()) cout << qu.front();
            else cout << "-1";
            cout << "\n";
            break;
        }
        case 6:{
            if (qu.size()){
                cout << qu.back() << "\n";
            }
            else cout << "-1\n";
            break;
        }
        
        default:
            break;
        }
    }
} 