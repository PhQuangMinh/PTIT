#include<stdio.h>
#include<math.h>
#include<string.h>
void solve(){
	char s[2000];
	gets(s);
	int check[5]={};
	for (int i=0;i<strlen(s);i++){
		switch (s[i]){
			case '(':{
				check[0]++;
				break;
			}
			case ')':{
				check[0]++;
				break;
			}
			case '[':{
				check[1]++;
				break;
			}
			case ']':{
				check[1]++;
				break;
			}
			case '{':{
				check[2]++;
				break;
			}
			case '}':{
				check[2]++;
				break;
			}
			case '\'':{
				check[3]++;
				break;
			}
			case '"':{
				check[4]++;
				break;
			}
		}
	}
	for (int i=0;i<5;i++)
	    if (check[i]%2){
	        printf("0");
	        return;
	    }
	printf("1");
}
int main(){
    solve();
}
