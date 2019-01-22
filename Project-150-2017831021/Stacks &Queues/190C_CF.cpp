#include<bits/stdc++.h>
using namespace std;
int n,t;
string s,b;
void F(){
	if(cin>>s){
		b+=s;
		if(s=="pair") b+='<',F(),b+=',',F(),b+='>';
	}
	else t=1;
}
int main(){
	cin>>n;
	F();
	if(t||cin>>s) cout<<"Error occurred"<<endl;
	else cout<<b<<endl;
	return 0;
}


