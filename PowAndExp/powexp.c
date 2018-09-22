#include <stdio.h>
#define N 250

int main()
{
    int i,lenx,lenn;
    char x[N],n[N];
    long long int p,base,exp,ans;
    while(scanf("%s%s%lld",x,n,&p)!=EOF){
        base=0;exp=0;
        lenx=strlen(x);
        lenn=strlen(n);
        for(i=0;i<lenx;i++) base=(base*10+(x[i]-'0'))%p; //一位數一位數的做%p的動作
        for(i=0;i<lenn;i++) exp=(exp*10+(n[i]-'0'))%(p-1);  //費馬定理
        ans=1;
        while(exp>0){   //快速冪
            if(exp&1) ans=(ans*base)%p;
            exp>>=1;
            base=(base*base)%p;
        }
        printf("%lld\n",ans);
    }
    return 0;
}
