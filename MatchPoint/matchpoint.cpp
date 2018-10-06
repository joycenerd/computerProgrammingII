#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>  //abs()
#include <cstdlib>   //atoi() sqrt()
#include <cstring>  //strtok()
#define N 100000
//在include header files的時候一定要小心，不要遺漏任和一個
//因為有可能會compilation error

using namespace std;

 int main()
{
    int t,i,j;
    char *token;
    double total;
    int x[N],y[N];
    char l[N];
    fgets(l,N,stdin);
    sscanf(l,"%d",&t);   //從字串裡抓數字
    while(t--){
        fgets(l,N,stdin);
        i=0;
        token=strtok(l," \0");  //告訴strtok()在哪些地方切開
        while(token!=NULL){
            x[i]=atoi(token);  //將字元轉數字
            i++;
            token=strtok(NULL," \0");  //strtok()的特殊用法，第一次以後從NULL開始切
        }
        fgets(l,N,stdin);
        i=0;
        token=strtok(l," \0");
        while(token!=NULL){
            y[i]=atoi(token);
            i++;
            token=strtok(NULL," \0");
        }
        for(j=0;j<i;j++){
            x[j]=abs(x[j]);  //取絕對值
            y[j]=abs(y[j]);
        }
        sort(x,x+i);
        sort(y,y+i);
        reverse(y,y+i);  //reverse()將y[]從小排到大
        total=0;
        for(j=0;j<i;j++) total+=sqrt(x[j]*x[j]+y[j]*y[j]);  //sqrt()開根號
        printf("%d\n",(int)total);  //將total轉成整數
    }
    return 0;
}
