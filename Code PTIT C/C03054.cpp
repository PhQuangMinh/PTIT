#include<stdio.h>
#include<math.h>
#include<string.h>
int cd(int x){
	if (x==0) return 0;
	if (x==1) return 1;
	if (x==8) return 0;
	if (x==9) return 0;
	return -1;
}
void solve(){
	char s[20];
	scanf("%s", &s);
	int d=-1;
	for (int i=0;i<strlen(s);i++){
		int k=s[i]-'0';
		if (cd(k)==-1){
			printf("INVALID\n");
			return;
		}
		else{
			s[i]=cd(k)+'0';
			if (cd(k)==1 && d==-1) d=i;
		}
	}
	if (d==-1) printf("INVALID");
	else 
	    for (int i=d;i<strlen(s);i++) 
	        printf("%c", s[i]);
	printf("\n");
}
int main(){
	int n;
	scanf("%d", &n);
	while (n--) solve();
}
