#include<stdio.h>
#include<string.h>
int main(){
	char s[100];
	int max=0;
	int ok=1;
	char luu[1005][100];
	int dem=0;
	while (scanf("%s", &s)!=-1){
        if (strlen(s)>max){
		    max=strlen(s);
		    dem=0;
		    strcpy(luu[++dem], s);
		}
		else{
			if (strlen(s)==max)
			    strcpy(luu[++dem], s);
		}
	}
	int check[2000]={0};
	for (int i=1;i<=dem;i++){
		int count=0;
		for (int j=i;j<=dem;j++)
		    if (check[j]==0 && strcmp(luu[i], luu[j])==0){
		    	count++;
		    	check[j]=1;
			}
		if (count>0) printf("%s %d %d\n", luu[i], max, count);
	}
}

