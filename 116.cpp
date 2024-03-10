//
// Created by star on 2024/2/22.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>
using namespace std;
const int N=5;
char g[N][N];
char backup[N][N];
void turn_one(int i,int j)
{
    if(g[i][j]=='+')
        g[i][j]='-';
    else
        g[i][j]='+';
}
void turn_all(int x,int y)
{
    for(int i=0;i<4;i++){
        turn_one(x,i);
        turn_one(i,y);
    }
    turn_one(x,y);
}
int get(int x,int y)
{
    return x*4+y;
}
int main() {
    for(int i=0;i<4;i++)
        scanf("%s",g[i]);
    memcpy(backup,g,sizeof(g));
    vector<pair<int,int>> ans;
    for(int op=0;op<(2<<16);op++){
        memcpy(g,backup,sizeof(g));
        vector<pair<int,int>> tmp;
        for(int i=0;i<4;i++){
            for(int j=0;j<4;j++){
                if(op>>(get(i,j))&1){
                    tmp.push_back({i,j});
                    turn_all(i,j);
                }
            }
        }
        bool OK=true;
        for(int i=0;i<4;i++){
            for(int j=0;j<4;j++){
                if(g[i][j]=='+'){
                    OK=false;
                    break;
                }
            }
        }
        if(OK){
            if(ans.empty() || tmp.size()<ans.size()){
                ans=tmp;
            }
        }
    }
    printf("%d\n",ans.size());
    for(auto p:ans){
        printf("%d %d\n",p.first+1,p.second+1);
    }
    return 0;
}