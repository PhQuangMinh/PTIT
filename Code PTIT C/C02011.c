#include<stdio.h> 
int main(){ 
    int n,m; 
	scanf("%d%d",&n,&m); 
	int i,j; 
	for(i=1;i<=n;i++){ 
	    if(i<m){ 
		    for (j=i;j<=m;j++) printf("%d",j); 
			for (j=m-1;j>m-i;j--) printf("%d",j); 
		}
		else 
		    for (j=i;j>=i-m+1;j--) printf("%d",j); 
	    if (i!=n) printf("\n"); 
	} 
}
