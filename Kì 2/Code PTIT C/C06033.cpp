#include<stdio.h>
#include<string.h>
int solve(char s[], char t[], char xau[], int n){
	char s1[300], t1[300];
	strcpy(s1, s);
	strcpy(t1, t);
	int ok=1;
	int dem=0;
	while (ok){
		dem++;
		int js=0, jt=0;
		char res[500];
		for (int i=0;i<2*n;i++)
		    if (i%2==0){
		    	res[i]=t1[jt];
		    	jt++;
		    }
		    else{
		    	res[i]=s1[js];
		    	js++;
			}
		res[2*n]='\0';
		if (strcmp(res, xau)==0) return dem;
		strncpy(s1, res, n);
		s1[n]='\0';
		strncpy(t1, res+n, n);
		t1[n]='\0';
//		printf("%s %s %s\n", s1, t1, res);
		if (strcmp(s1, s)==0 && strcmp(t1, t)==0) ok=0;
	}
	return -1;
}
int main(){
	while (1){
		int n;
		scanf("%d", &n);
		if (n==0) return 0;
		char s[300], t[300], xau[500];
		scanf("%s%s%s", &s, &t, &xau);
		printf("%d\n", solve(s, t, xau, n));
	}
}
//4
//AHAH
//HAHA
//HHAAAAHH
//3
//CDE
//CDE
//EEDDCC
//0
