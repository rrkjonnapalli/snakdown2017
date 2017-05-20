#include <stdio.h>
int n;
int main(){
	int j=0;
	scanf("%d",&n);
	//int res[n];
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
				printf("Invalid\n");
				flag = 0;
				break;
			}
		}
		if(flag == 1){
			if(c == 0){
				printf("Valid\n");
			}
			else{
				printf("Invalid\n");
			}
		}
	}
	return 0;
}
