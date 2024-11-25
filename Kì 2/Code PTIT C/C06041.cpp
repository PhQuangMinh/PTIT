#include<stdio.h>
#include<string.h>
int main(){
	char s[100005];
	scanf("%s", &s);
	int ma='a';
	int n=strlen(s);
	int d[200]={0};
	for (int i=0;i<n;i++){
		d[s[i]]++;
		if (s[i]>ma) ma=s[i];
	}
	int i=0;
	while (i<n){
		while (d[ma]>0 && i<n){
			if (s[i]==ma){
				printf("%c", s[i]);
			    d[ma]--;
			}
			else d[s[i]]--;
			i++;
		}
		while (d[ma]==0 && ma>=97) ma--; 
//		printf("%d ", ma);
	}
}
