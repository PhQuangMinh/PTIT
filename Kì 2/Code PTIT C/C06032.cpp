#include<stdio.h>
#include<string.h>
void solve(){
	int n;
	scanf("%d", &n);
	char a[100][100];
	for (int i=1;i<=n;i++)
	    scanf("%s", &a[i]);
	for (int i=1;i<n;i++)
	    for (int j=i+1;j<=n;j++){
	    	char ts[100], st[100];
	    	strcpy(ts, a[i]);
	    	strcpy(st, a[j]);
	    	strcat(ts, a[j]);
	    	strcat(st, a[i]);
	    	if (strcmp(ts, st)>0){
	    		char tmp[100];
	    		strcpy(tmp, a[i]);
	    		strcpy(a[i], a[j]);
	    		strcpy(a[j], tmp);
			}	
		}
	for (int i=1;i<=n;i++)
	    printf("%s", a[i]);
}
int main(){
	int n;
	scanf("%d", &n);
	for (int i=1;i<=n;i++){
		solve();
		if (i!=n) printf("\n");
	}
}
//5
//4 acm ptit for students
//5 k duz q rc lvraw
//3 a bb cc
//5 asf asfi asfi afsi okj
//5 ukuy hopji lie jaa dcyi
