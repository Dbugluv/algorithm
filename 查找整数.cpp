#include<stdio.h>
#define N 1001
int main(){
	int n,b[N]={0},a;
	scanf("%d",&n);
	int i;
	for(i=1;i<=n;i++)
		scanf("%d",&b[i]);
	scanf("%d",&a);
	int flag=0;
	for(i=1;i<=n;i++){
		if(b[i]==a){
			flag=1;
			printf("%d",i);
			break;
		}
	}
	if(flag==0)
		printf("-1");
	
	return 0;
}