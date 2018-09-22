#include <stdio.h>

int main()
{
    int n,index,i;
    long long int x,y,p,ans;
    scanf("%d",&n);
    while(n--){
        scanf("%lld%lld%lld",&x,&y,&p);
        ans=1;
        while(y>0){
            if(y&1) ans=(ans*x)%p; //用y的binary來決定該次要不要乘進答案
            y>>=1;  //y/2
            x=(x*x)%p;
        }
        printf("%lld\n",ans);
    }
    return 0;
}
