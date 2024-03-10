#include <iostream>
using namespace std;
int n;
int cnt=0;
bool vis[10];
int path[10];
int dfs(int k)
{
    if(k==9){
        for(int p=1;p<=7;p++){
            for(int q=p+1;q<=8;q++){
                int a=0,b=0,c=0;
                for(int i=0;i<p;i++){
                    a=a*10+path[i];
                }
                for(int i=p;i<q;i++){
                    b=b*10+path[i];
                }
                for(int i=q;i<9;i++){
                    c=c*10+path[i];
                }
                if(b%c==0){
                    int ans=a+b/c;
                    if(ans==n)
                        cnt++;
                }
            }
        }
    }else{
        for(int i=1;i<=9;i++){
            if(!vis[i]){
                vis[i]=true;
                path[k]=i;
                dfs(k+1);
                vis[i]=false;
            }
        }
    }
}

int main()
{

    cin>>n;
    dfs(0);
    printf("%d\n",cnt);
}