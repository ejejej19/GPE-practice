# include <bits/stdc++.h>

using namespace std;

int main(){
    long long dp[30005] = {1}; // 紀錄全部可能
    int money[11] = { 10000, 5000, 2000, 1000, 500, 200,100, 50, 20, 10, 5 }; // 可使用的大小 避免使用小數 全部乘上100
    int p1,p2;

    for( int i = 10 ; i >= 0 ; i-- ){
        for( int j = money[i] ; j <= 30000 ; j++ ){
            dp[j] += dp[j-money[i]];
        }
    }
    while( scanf("%d.%d",&p1,&p2)&&(p1!=0||p2!=0) ){ // 分兩段讀取方便之後輸出及計算
        printf( "%3d.%02d%17lld\n", p1,p2, dp[p1*100+p2] ); // 固定輸出長度利用printf搭配%長度
    }

    return 0;

}

