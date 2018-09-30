#include <iostream>
#include <cstdio>
#include <algorithm>
#define N 10010

using namespace std;

int main()
{
    int t,n,m,i,j,cost;
    int ite[N],stu[N];
    scanf("%d",&t);
    while(t--){
        scanf("%d%d",&n,&m);
        for(i=0;i<n;i++) scanf("%d",&ite[i]);
        for(i=0;i<m;i++) scanf("%d",&stu[i]);
        sort(ite,ite+n);
        sort(stu,stu+m);
        cost=0;
        //只要i有走到底且都可以找到對應的j那肯定有解
        for(i=0,j=0;i<n;i++){
            while(j<m && stu[j]<ite[i]) j++;
            if(j==m){
                cost=-1;
                break;
            }
            cost+=stu[j];
            j++;
        }
        printf("%d\n",cost);
    }
    return 0;
}
