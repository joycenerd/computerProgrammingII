#include <stdio.h>
#include <string.h>

int main()
{

    int i,j,num,m,n,len;
    char str[100];
    long long int total;
    while(1){
        fgets(str,100,stdin);
        sscanf(str,"%d",&n);  //從str字串中抓出數字
        if(n==0)
            break;
        total=0;
        for(i=0; i<n; i++){
            fgets(str,20,stdin);
            num=0;
            len=strlen(str)-1;
            for(j=0; j<len; j++){
                num<<=1;  //k向左一1格代表k*2的意思
                if(str[j]=='1') num|=1;   //如果k是1話將k+1
            }
            total+=num;
        }
        printf("%lld\n",total);
    }
    return 0;
}
