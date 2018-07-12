//
//  main.c
//  math_divisor
//
//  Created by Joyce Chin on 2018/2/27.
//  Copyright © 2018年 Joyce Chin. All rights reserved.
//

#include <stdio.h>

int main()
{
    int n,q1,r1,q2,r2,a,b,p,q,r,i;
    scanf("%d",&n);
    while(n--){
        scanf("%d%d%d%d",&q1,&r1,&q2,&r2);
        a=q1-r1;
        b=q2-r2;
        if(a>b){
            p=a;
            q=b;
        }
        else{
            p=b;
            q=a;
        }
        while(p%q!=0){
            r=p%q;
            p=q;
            q=r;
        }
        printf("%d",1);
        for(i=2;i<=q;i++){
            if(q%i==0) printf(" %d",i);
        }
        printf("\n");
    }
    return 0;
}
