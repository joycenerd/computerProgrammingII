#include <bits/stdc++.h>
typedef long long int ll;
#define N 10

int main()
{
    char n[N],m[N];
    while(scanf("%s%s",n,m)!=EOF){
        int len=strlen(m);
        int i; int count=0;
        for(i=0;i<len-1;i++){
            if(strncmp(n,m+i,2)==0) count++;
        }
        printf("%d\n",count);
    }
    return 0;
}
