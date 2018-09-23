#include <iostream>
#include <cstdio>
#include <algorithm>
#define N 10010

using namespace std;

int main()
{
    int n,i,j,w;
    int ene[N],sol[N];
    while(1){
        scanf("%d",&n);
        if(n==0) break;
        for(i=0;i<n;i++) scanf("%d",&ene[i]);
        for(i=0;i<n;i++) scanf("%d",&sol[i]);
        sort(ene,ene+n);  //呼叫c++內建函式sort
        sort(sol,sol+n);   //記得如果直接呼叫sort是由小排到大喔
        i=j=w=0;
        while(j<n){
            while((ene[i]>=sol[j])&&(j<n)) j++;  //找到第一個可以打敗敵軍最小的
            if(j==n) break;
            w++;i++;j++;  //找到就將所有東西加一
        }
        printf("%d\n",w);
    }
    return 0;
}
