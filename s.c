
#include <stdio.h>
int n;
int main(){
	int j=0;
	scanf("%d",&n);
	int res[n];
	for(;j<n;j++){
		int i=0,l,c=0,flag = 1;
		scanf("%d", &l);
		char str[l];
		scanf("%s",str);
		for(;i<l;i++){
			if(str[i] == 'H')
			c++;
			if(str[i] == 'T')
			c--;
			if(c == 2 || c == -1){
				res[j] = 0;
				flag = 0;
				break;
			}
		}
		if(flag == 1){
			if(c == 0){
				res[j] = 1;
			}
			else{
				res[j] = 0;
			}
		}
	}
	for(j=0;j<n-1;j++)
	printf("%s\n",(res[j] == 1)?"Valid":"Invalid");
	printf("%s",(res[n-1] == 1)?"Valid":"Invalid");
	return 0;
}
