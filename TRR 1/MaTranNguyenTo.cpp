/*
- Tạo một ma trận 5*5 sao cho thỏa mãn các điều kiện 
    + Đọc từ trái sang phải có 5 số nguyên tố
    + Đọc từ trên xuống dưới có 5 số nguyên tố
    + Đọc 2 đường chéo có 2 số nguyên tố
    + Tất cả các số đều có tổng chữ số bằng S, với S nhập từ bàn phím
    Cách điền
    1  2  3  4  5
    6  13 14 12 15
    7  16 11 18 19
    8  10 20 22 23
    9  17 21 24 25
    Ví dụ:
    3 5 1 1 1 
    5 0 0 3 3
    1 0 3 4 3
    1 3 4 2 1
    1 3 3 1 3
*/
#include<bits/stdc++.h>
using namespace std;
//vector để lưu lại tất cả số nguyên tố có tổng bằng s;
vector<int> snt;
//vector để lưu lại tất cả số nguyên tố có tổng bằng s theo từng chữ số đầu tiên
vector<int> nt[10];
//S là tổng của từng số nguyên tố trong ma trận
int s;
//Ma trận nguyên tố
int a[10][10];
void round1(int x);
void round2();
void round3();
void round4();
void round5();
void round6();
void round7();
void round8();
void round9();
//cnt: Dùng để lưu số lượng số nguyên tố thỏa mãn
int cnt=0;
//Mảng đánh dấu số nguyên tố
int nto[100000]={0};
//Hàm tính tổng chữ số của 1 số
int tongchuso(int x){
    int sum=0;
    while (x){
        sum+=x%10;
        x/=10;
    }
    return sum==s;
}
//Hàm kiểm tra số nguyên tố
int nguyento(int x){
    for (int i=2;i*i<=x;i++)
        if (x%i==0) return 0;
    return x>1;
}
//Tìm số nguyên tố
void locnguyento(){
    for (int i=1;i<=9;i++){
        //dùng để duyệt từng đoạn
        int beg=10000*i;
        int en=10000*(i+1);
        for (int j=beg;j<=en;j++)
            if (nguyento(j) && tongchuso(j)){
                //đẩy vào số nguyên tố có i đầu
                nt[i].push_back(j);
                //Đẩy vào số nguyên tố chung
                snt.push_back(j);
                //Đánh dấu số là số nguyên tố
                nto[j]=1;
            }
    }
}
//Hàm in ra ma trận
void printf(){
    for (int i=1;i<=5;i++){
        for (int j=1;j<=5;j++)
            cout << a[i][j] << " ";
        cout << "\n";
    }
    cout << "----------------------------------\n";
}
//Kiểm tra ma trận coi thỏa mãn yêu cầu đề bài hay không?
int checkmatrix(){
    //Dùng để lấy ra từng chữ số của hàng cột
    for (int i=1;i<=5;i++){
        int tmp=0, tmp1=0;
        for (int j=1;j<=5;j++){
            //Lấy ra từng chữ số của cột rồi nhân lên
            tmp=tmp*10+a[j][i];
            //Lấy ra từng chữ số của hàng rồi nhân lên
            tmp1=tmp1*10+a[i][j];
        }
        //Kiểm tra xem 2 số đó có phải là số nguyên tố hay không?
        if (nto[tmp]==0 || nto[tmp1]==0){
            return 0;
        }
    }
    int sum=0, sum1=0;
    int tmp=0, tmp1=0;
    //Kiểm tra 2 đường chéo coi có thỏa mãn không?
    for (int i=1;i<=5;i++){
        //Tổng hai đường chéo
        sum+=a[i][i];
        sum1+=a[6-i][i];
        //Lấy ra từng chữ số của 2 đường chéo rồi nhân lên
        tmp=tmp*10+a[i][i];
        tmp1=tmp1*10+a[6-i][i];
    }
    //Kiểm tra xem 2 đường chéo có tổng bằng S và có phải số nguyên tố hay không?
    if (nto[tmp]==0 || nto[tmp1]==0 || sum!=s || sum1!=s){
            return 0;
        }
    return 1;
}
//Kiểm tra xem các số bên trên và trái ma trận có chữ số nào bằng 0 hay không?
int checkcanh(int x){
    while (x!=0){
        int k=x%10;
        if (k==0) return 0;
        x/=10;
    }
    return 1;
}
//Điền số từ 1 đến 5;
void round1(int x){
    //Nếu cạnh bên trên và bên trái có chữ số bằng 0 thì không thỏa mãn(số từ 1 đến 5)
    if (checkcanh(x)==0) return;
    //Đặt từng số của hàng thứ nhất
    for (int i=5;i>=1;i--){
        a[1][i]=x%10;
        x/=10;
    }
    //Tiếp tục gọi hàm round 2 để điền từ 6 đến 9
    round2();
}
//Điền các số từ 6 đến 9
void round2(){
    //Lấy ra chữ số đầu tiên của hàng thứ nhất (a[1][1])
    int csd=a[1][1];
    //Duyệt từng số có chữ số đầu tiên là a[1][1]
    for (auto x:nt[csd]){
        //Nếu cạnh bên trên và bên trái có chữ số bằng 0 thì không thỏa mãn(số từ 6 đến 9)
        if (checkcanh(x)==0) continue;
        int tmp=x;
        //tiếp tục điền các chữ số từ 6 đến 9
        for (int i=5;i>1;i--){
            a[i][1]=tmp%10;
            tmp/=10;
        }
        //gọi hàm round 3 để điền các chữ số từ 10 đến 12
        round3();
    }
}
//Điền các số từ 10 đến 12
void round3(){
    //Lấy ra chữ số đầu tiên của số nguyên tố(số 9 trong ma trận mẫu)
    int csd=a[5][1];
    //duyệt từng số có chữ số đầu tiên là số 9 trong ma trận mẫu
    for (auto x:nt[csd]){
        //Nếu chữ số của cùng của số đó bằng số thứ 5(a[1][5]) trong ma trận mẫu
        if (x%10==a[1][5]){
            int tmp=x;
            tmp/=10;
            //Điền các số 10, 11, 12 trong ma trận mẫu
            for (int i=2;i<=4;i++){
                a[i][6-i]=tmp%10;
                tmp/=10;
            }
            //Gọi hàm round 4 để điền các số từ 13 đến 15
            round4();
        }
    }
}
//Điền các số từ 13 đến 15
void round4(){
    //Nếu chữ số của cùng của số đó bằng số thứ 6(a[2][1]) trong ma trận mẫu
    int csd=a[2][1];
    //duyệt từng số có chữ số đầu tiên là số 6 trong ma trận mẫu
    for (auto x:nt[csd]){
        int tmp=x;
        tmp/=10;
        //Kiểm tra xem chữ số thứ 2 từ phải sang có bằng số thứ 12 trong ma trận mẫu không?
        if (tmp%10==a[2][4]){
            tmp=x;
            //Tiếp tục điền số thứ 13 đến 15
            for (int i=5;i>=2;i--){
                a[2][i]=tmp%10;
                tmp/=10;
            }
            round5();
        }
    }
}
//Điền các số 16, 17
void round5(){
    //Lấy chữ số đầu tiên của số nguyên tố(số thứ 2)
    int csd=a[1][2];
    for (auto x:nt[csd]){
        int d=5;
        int b[10];
        //Lấy từng chữ số của số đó
        while (x){
            b[d--]=x%10;
            x/=10;
        }
        //Kiểm tra xem 2 chữ số trong số nguyên tố có bằng số thứ 13 và 10 hay không
        if (b[2]==a[2][2] && b[4]==a[4][2]){
            a[3][2]=b[3];
            a[5][2]=b[5];
            round6();
        }
    }
}
//Điền các số 18, 19
void round6(){
    //Lấy chữ số đầu tiên của số nguyên tố(số thứ 7)
    int csd=a[3][1];
    for (auto x:nt[csd]){
        int d=5;
        int b[10];
        //Lấy từng chữ số trong số nguyên tố đó
        while (x){
            b[d--]=x%10;
            x/=10;
        }
        //Kiểm tra xem 2 chữ số trong số đó có bằng số 16 vs 11 trong ma trận không
        if (b[2]==a[3][2] && b[3]==a[3][3]){
            a[3][4]=b[4];
            a[3][5]=b[5];
            round7();
        }
    }
}
//Điền các số 20, 21
void round7(){
    //Lấy chữ số nguyên tố đầu tiên(số thứ 3 trong ma trận)
    int csd=a[1][3];
    for (auto x:nt[csd]){
        int d=5;
        int b[10];
        //Lấy từng chữ số của số x;
        while (x){
            b[d--]=x%10;
            x/=10;
        }
        //Kiểm tra xem 2 chữ số trong x có bằng 11 và 14 hay không?
        if (b[2]==a[2][3] && b[3]==a[3][3]){
            a[4][3]=b[4];
            a[5][3]=b[5];
            round8();
        }
    }
}
//Điền các số 22, 23
void round8(){
    //Lấy chữ số đâu tiên trong số nguyên tố(số 8)
    int csd=a[4][1];
    for (auto x:nt[csd]){
        int d=5;
        int b[10];
        //Lấy từng chữ số của x
        while (x){
            b[d--]=x%10;
            x/=10;
        }
        //Kiểm tra 2 số trong x có bằng số 10 và số 20 hay không
        if (b[2]==a[4][2] && b[3]==a[4][3]){
            a[4][4]=b[4];
            a[4][5]=b[5];
            round9();
        }
    }
}
//Điền các số 24, 25
void round9(){
    //Lấy chữ số đầu tiên trong số nguyên tố(số 9)
    int csd=a[5][1];
    for (auto x:nt[csd]){
        int d=5;
        int b[10];
        //Lấy ra từng chữ số trong x
        while (x){
            b[d--]=x%10;
            x/=10;
        }
        //Kiểm tra xem 2 chữ số trongt x có bằng số 17 và 21 hay không
        if (b[2]==a[5][2] && b[3]==a[5][3]){
            a[5][4]=b[4];
            a[5][5]=b[5];  
            //Kiểm tra ma trận sau khi điền có thỏa mãn yêu cầu để bài hay không
            if (checkmatrix()==1){
                printf();
                cnt++;
            }
        }
    }
}
int main(){
    do{
        cout << "Nhập tổng chữ số nguyên tố trong ma trận: ";
        cin >> s;
        if (s<1 || s>45) cout << "Mời nhập lại!\n";
    }while (s<1 || s>45);
    locnguyento();
    for (auto x:snt){
        round1(x);
    }
    cout << "Số lượng ma trận thỏa mãn yêu cầu: " << cnt << "\n";
}