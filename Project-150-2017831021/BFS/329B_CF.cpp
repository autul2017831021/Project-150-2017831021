#include <stdio.h>
const int N=1024,dr[]={-1,0,1,0},dc[]={0,1,0,-1};
int n,m,q[N*N],v[N][N];
char g[N][N];
main(){
  scanf("%d%d",&n,&m);
  for(int i=1;i<=n;++i)scanf("%s",g[i]+1);
  int sr=0,sc=0;
  for(int i=1;i<=n;++i)for(int j=1;j<=m;++j)if('E'==g[i][j]){
    int h=0,t=0;
    q[t++]=(i<<10)+j;
    v[i][j]=1<<20;
    while(h<t){
      int r=q[h++],c=r&0x3ff;r>>=10;
      for(int d=0;d<4;++d){
        int r1=r+dr[d],c1=c+dc[d];
        if(g[r1][c1]&&g[r1][c1]!='T'&&!v[r1][c1])v[r1][c1]=v[r][c]-1,q[t++]=(r1<<10)+c1;
      }
    }
  } else if('S'==g[i][j])sr=i,sc=j;
  int s=0;
  for(int i=1;i<=n;++i)for(int j=1;j<=m;++j)if(v[i][j]>=v[sr][sc]&&g[i][j]>='0'&&g[i][j]<='9')s+=g[i][j]-'0';
  printf("%d\n",s);
}
