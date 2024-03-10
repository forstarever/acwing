//
// Created by star on 2024/2/23.
//

#include <iostream>

using namespace std;
const int N=105;
int t;
int m[N][N];
int f[N][N];
int main() {
    cin>>t;
    while(t--){
        int r,c;
        scanf("%d%d",&r,&c);
        for(int i=1;i<=r;i++){
            for(int j=1;j<=c;j++){
                scanf("%d",&m[i][j]);
            }
        }
        for(int i=1;i<=r;i++){
            for(int j=1;j<=c;j++){
                f[i][j]=max(f[i-1][j]+m[i][j],f[i][j-1]+m[i][j]);
            }
        }
        printf("%d\n",f[r][c]);
    }
    return 0;
}