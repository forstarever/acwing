#include <iostream>
#include <cstring>
using namespace std;
const int N=7;
int m[N][N];
bool vis[N][N];
int n;
void change(int i,int j)
{
    m[i][j]=1-m[i][j];
    m[i-1][j]=1-m[i-1][j];
    m[i+1][j]=1-m[i+1][j];
    m[i][j-1]=1-m[i][j-1];
    m[i][j+1]=1-m[i][j+1];
}
bool OK()
{
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++)
            if(m[i][j]==0)
                return false;
    }
    return true;
}
int dfs(int k)
{
    if(k>6){
        return -1;
    }else{
        for(int i=1;i<=5;i++){
            for(int j=1;j<=5;j++){
                if(!vis[i][j] && !m[i][j]){
                    change(i,j);
                    vis[i][j]=true;
                    if(OK()){
                        return k;
                    }else{
                        dfs(k+1);
                        change(i,j);
                        vis[i][j]=false;
                    }
                }
            }
        }
    }
}
int main()
{
    cin>>n;
    for(int k=0;k<n;k++){
        memset(m,0,sizeof(m));
        for(int i=1;i<=5;i++){
            for(int j=1;j<=5;j++){
                scanf("%d",&m[i][j]);
            }
        }
        printf("%d\n",dfs(1));
    }
}