#include<stdio.h>
#include<string.h>
#include<math.h>
void solve(){
	int n;
	scanf("%d", &n);
	int demc=0, deml=0;
	int a[100], b[100];
	for (int i=1;i<=n;i++){
		int x;
	    scanf("%d", &x);
	    if (x%2==0){
	    	demc++;a[demc]=x;
		}
		else{
			deml++;b[deml]=x;
		}
	}	
	for (int i=1;i<demc;i++)
	    for (int j=i+1;j<=demc;j++)
	        if (a[i]>a[j]){
	        	int t=a[i];a[i]=a[j];a[j]=t;
			}
	for (int i=1;i<deml;i++)
	    for (int j=i+1;j<=deml;j++)
	        if (b[i]>b[j]){
	        	int t=b[i];b[i]=b[j];b[j]=t;
			}
	for (int i=1;i<=demc;i++) printf("%d ", a[i]);
	for (int i=1;i<=deml;i++) printf("%d ", b[i]);
}
int main(){
	solve();
}
