//
// Created by star on 2024/2/22.
//

#include <iostream>

using namespace std;
const int N=5005;
//int g[N][N];
int s[N][N];
int n,r;
int main() {
    cin>>n>>r;
    r=min(r,5001);
    int x,y,w;
    for(int i=0;i<n;i++){
        scanf("%d %d %d",&x,&y,&w);
        s[x+1][y+1]+=w;
    }
    for(int i=1;i<N;i++){
        for(int j=1;j<N;j++){
            s[i][j]+=s[i-1][j]+s[i][j-1]-s[i-1][j-1];
        }
    }
    int ans=0;
    for(int i=r;i<N;i++){
        for(int j=r;j<N;j++){
            int res=s[i][j]-s[i-r][j]-s[i][j-r]+s[i-r][j-r];
            ans=max(ans,res);
        }
    }
    printf("%d\n",ans);
    return 0;
}