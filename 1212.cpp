//
// Created by star on 2024/2/24.
//

#include <iostream>

using namespace std;
const int N=55;
int c[N][N];
int f[N][N][2];
int n,m,k;

int main() {
    cin>>n>>m>>k;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            scanf("%d",&c[i][j]);
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(c[i][j]>f[i][j][0]){

            }
        }
    }
    return 0;
}