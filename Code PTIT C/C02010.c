#include<stdio.h>
int main(){ 
    int n, m; 
	scanf("%d%d",&n,&m);
	int i,j,k; 
	for(i=1;i<=n;i++){ 
	    for(j=i;j<=m;j++) printf("%d",j);  
		if(i>m){ 
		    printf("%d",i); 
			for(j=m-1;j>0;j--) printf("%d",j); 
		}
		else
		    for(j=i-1;j>0;j--)
			    printf("%d",j); 
	    printf("\n"); 
	} 
}
