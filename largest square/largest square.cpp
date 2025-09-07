#include<bits/stdc++.h>

using namespace std;

int t,m,n,q,x,y,l,dx[2],dy[2];
char c[105][105];
int track(int k){
	dx[0] = x-k; // up
	dx[1] = x+k; // down
	dy[0] = y-k; // left
	dy[1] = y+k; // right
	if( dx[0]<0 || dx[1]>=m || dy[0]<0 || dy[1]>=n ) return 2*k-1;
	for(l=dx[0];l<=dx[1];l++){
		if(c[l][dy[0]]!=c[x][y]) return 2*k-1;
		if(c[l][dy[1]]!=c[x][y]) return 2*k-1;
	}
	for(l=dy[0]+1;l<dy[1];l++){
		if(c[dx[0]][l]!=c[x][y]) return 2*k-1;
		if(c[dx[1]][l]!=c[x][y]) return 2*k-1;
	}
	return track(k+1); // check the bigger one
}
int main(){
	cin >> t;
	while(t--){
		cin >> m >> n >> q;;
		for(int i=0;i<m;i++) gets(c[i]);
		cout << m << " " << n << " " << q << endl;
		while(q--){
			cin >> x >> y;
			printf("%d\n",track(1));
		}
	}
}