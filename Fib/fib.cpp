#include <bits/stdc++.h>
typedef long long int ll;

int main()
{
    ll n,p,a,b,c;
    ll arr[3][3],ans[3][3],temp[3][3],tempans[3][3];
    while(scanf("%lld%lld%lld%lld%lld",&n,&p,&a,&b,&c)!=EOF){
        n-=3;
        arr[0][0]=a;arr[0][1]=b;arr[0][2]=c;
        arr[1][0]=arr[2][1]=1;
        arr[1][1]=arr[1][2]=arr[2][0]=arr[2][2]=0;
        int i,j;
        for(i=0;i<3;i++){
            for(j=0;j<3;j++){
                if(i==j) ans[i][j]=1;
                else ans[i][j]=0;
            }
        }
        while(n>0){
            for(i=0;i<3;i++){
                for(j=0;j<3;j++) temp[i][j]=tempans[i][j]=0;
            }
            int k;
            if(n&1){
                for(i=0;i<3;i++){
                    for(j=0;j<3;j++){
                        for(k=0;k<3;k++) tempans[i][j]+=ans[i][k]*arr[k][j];
                    }
                }
                for(i=0;i<3;i++){
                    for(j=0;j<3;j++) ans[i][j]=tempans[i][j]%p;
                }
            }
            for(i=0;i<3;i++){
                for(j=0;j<3;j++){
                    for(k=0;k<3;k++) temp[i][j]+=arr[i][k]*arr[k][j];
                }
            }
            for(i=0;i<3;i++){
                for(j=0;j<3;j++) arr[i][j]=temp[i][j]%p;
            }
            n>>=1;
        }
        ll fib=(ans[0][0]+ans[0][1]+ans[0][2])%p;
        printf("%lld\n",fib);
    }
    return 0;
}
