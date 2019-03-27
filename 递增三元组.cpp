#include<iostream>
#include<algorithm>
using namespace std;
const int N = 100000;
int main(){
	int n,sum=0;
	int a[N],b[N],c[N]={0};
	cin>>n;
	int i,j=0;
	for(i=1;i<=n;i++)	//赋值 
		cin>>a[i];
	for(i=1;i<=n;i++)
		cin>>b[i];
	for(i=1;i<=n;i++)
		cin>>c[i];
	sort(a,a+n);	//排序 
//	sort(b,b+n);	//无影响 
	sort(c,c+n);
	int a1=0,c1=n;	//记录a、c数组分别有几个比b大小的数 
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			if(a[j]<b[i])	
				a1=j;		//更新比b小的数目 
			if(c[j]<b[i])
				c1=n-j;			 
		}
		sum+=a1*c1;
	}
	cout<<sum;
	
	return 0;
} 
