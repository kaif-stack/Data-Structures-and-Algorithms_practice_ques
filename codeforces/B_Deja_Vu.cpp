#include<cstdio>
#define M 35
long long F[M];
long long A[100005];
int main(){
	int T;
	scanf("%d",&T);
	F[0]=1;
	for(int i=1;i<=31;i++)F[i]=F[i-1]*2ll;
	while(T--){
		int n,m;
		scanf("%d%d",&n,&m);
		for(int i=1;i<=n;i++)scanf("%lld",&A[i]);
		int lst=33;
		while(m--){
			int x;
			scanf("%d",&x);
			if(x>=lst)continue;
			lst=x;
			for(int i=1;i<=n;i++)if(A[i]%F[x]==0)A[i]+=F[x-1];
		}
		for(int i=1;i<=n;i++)printf("%lld ",A[i]);puts("");
	}
	return 0;
}