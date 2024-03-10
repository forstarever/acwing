//
// Created by star on 2024/2/25.
//

#include <iostream>

using namespace std;
const int N=5005;
string a;
int dp[N][N];
int res;
int main() {
    cin>>a;
    int n=a.size();
    for(int len=2;len<=n;len++){
        for(int l=0;l+len-1<n;l++){
            int r=l+len-1;
            if(a[l]>a[r]){
                dp[l][r]=1;
                res++;
            }else if(a[l]==a[r]){
                dp[l][r]=dp[l+1][r-1];
                if(dp[l][r]==1)
                    res++;
            }
        }
    }
    printf("%d\n",res);
    return 0;
}