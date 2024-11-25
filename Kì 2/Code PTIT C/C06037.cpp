#include<stdio.h>
#include<string.h>
int main(){
	char s[100];
	scanf("%s", &s);
	int kq=0;
	for (int i=0;i<52;i++){
		int vt=-1;
		for (int j=i+2;j<52;j++)
		    if (s[i]==s[j]){
		    	vt=j;
			}
		int d[100]={0};
		for (int j=i+1;j<vt;j++)
		    d[s[j]]++;
		for (int j=65;j<=90;j++)
		    if (d[j]==1) kq++; 
	}
	kq/=2;
	printf("%d", kq);
}
