#include<bits/stdc++.h>
using namespace std;
int main(){
	char c,a[1000001];
	int k=0,ans=0;
	do{
		c=getchar();
		if(c=='<'||c=='('||c=='{'||c=='['){
			a[k]=c;k++;
		}
		if(c=='>'||c==')'||c=='}'||c==']'){
			k--;ans++;
			if(a[k]=='<'&&c=='>')ans--;
			if(a[k]=='['&&c==']')ans--;
			if(a[k]=='{'&&c=='}')ans--;
			if(a[k]=='('&&c==')')ans--;
		}
		if(k<0)c='\n';
	}
	while(c!='\n');
	if(k!=0)printf("Impossible");
	else printf("%d",ans);
	return 0;
}
