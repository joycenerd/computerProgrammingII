#include <stdio.h>
#include <stdlib.h>
#define N 60

int main()
{
    int n,m;
    int x[N],y[N];
    scanf("%d",&n);
    while(n--){
        scanf("%d",&m);
        int i;
        for(i=0;i<m;i++) scanf("%d%d",&x[i],&y[i]);
        int j,area;
        int max=0;
        for(i=0;i<m;i++){
            for(j=1;j<m;j++){
                if(x[i]==x[j] || y[i]==y[j]) continue;
                else{
                    area=abs((x[i]-x[j])*(y[i]-y[j]));
                    if(area>max) max=area;
                }
            }
        }
        printf("%d\n",max);
    }
    return 0;
}
