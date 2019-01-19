#include <iostream>
#include<algorithm>
#include<queue>
#include<map>
#define X first
#define Y second
using namespace std;
typedef long long ll;
typedef pair<ll,ll>p;
queue<p>q;
ll x,y,x1,y1;
int dx[]={-1,-1,-1,0,1,1,1,0};
int dy[]={-1,0,1,1,1,0,-1,-1};
map<p,int>m;

int main() {
	cin>>x>>y>>x1>>y1;int n;cin>>n;
	ll r,a,b;

	while(n--){
		cin>>r>>a>>b;
		for(int i=a;i<=b;i++)m[p(r,i)]=-1;
	}
	m[p(x,y)]=0;
	q.push(p(x,y));
	while(q.size()) {
		p u=q.front();
		q.pop();
		for(int i=0;i<8;i++) {
			p v=p(u.X+dx[i],u.Y+dy[i]);
			if(m.count(v)&&m[v]==-1)
				m[v]=m[u]+1,q.push(v);
		}
	}
	cout<<m[p(x1,y1)] << endl;
	return 0;
}
