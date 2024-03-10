//
// Created by star on 2024/2/22.
//

#include <iostream>

using namespace std;
int n,m;
bool dfs(int m,int p,int q)
{
    if(m==0)
        return true;
    if(m>=p && dfs(m-p,p,q))
        return true;
    if(m>=q && dfs(m-q,p,q))
        return true;
    return false;
}
int main() {
    cin>>n>>m;
    int res=0;
    for(int i=1;i<=1000;i++){
        if(!dfs(i,n,m))
            res=i;
    }
    printf("%d\n",res);
    return 0;
}

//#include <iostream>
//using namespace std;
//int main()
//{
//    int n,m;
//    cin>>n>>m;
//    printf("%d\n",(n-1)*(m-1)-1);
//    return 0;
//}