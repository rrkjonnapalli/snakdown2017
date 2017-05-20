

#include <stdio.h>

int main()
{
	int S,N[100],H[100][100],i,j,flag=1,first,last,len,val;
	scanf("%d",&S);
	for(i=0;i<S;i++){
		scanf("%d",&N[i]);
		for(j=0;j<N[i];j++)
			scanf("%d",&H[i][j]);
	}
	
	for(i=0;i<S;i++){
		flag = 1;
		len = N[i];
		first = H[i][0];
		last = H[i][len-1];
		
		//printf("%d\t%d\t%d",len,first,last);
		
		if(first!=1 || last!=1 || len%2!=1){
			//printf("condition");
			flag=0;
		}
		else{
			val=len/2;
			for(j=0;j<val-1;j++){
				if(H[i][j]+1 != H[i][j+1]){
					flag=0;
					break;
				}
			}
			for(j=val;j<=len-1;j++){
				if((H[i][j]-1 != H[i][j+1])){
					flag=0;
					break;
				}
			}
		}
		
		if(flag == 1)
			printf("yes\n");
		else
			printf("no\n");
				
	}
	
			
	return 0;
}

