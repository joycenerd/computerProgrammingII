#include <iostream>
#include <cstdio>
#include <algorithm>
#define N 1010

using namespace std;

int main()
{
    int t,n,i,wt,cur;
    int job[N];
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        for(i=0;i<n;i++) scanf("%d",&job[i]);
        sort(job,job+n);
        wt=cur=job[0];  //先把waiting time設成第一個客戶
        //每一次到下個客戶的waiting time是前一次加上這個客戶的距離再加上上個客戶的距離
        //要考慮去跟回
        for(i=1;i<n;i++){
            cur+=job[i]+job[i-1];
            wt+=cur;
        }
        printf("%d\n",wt);
    }
    return 0;
}
