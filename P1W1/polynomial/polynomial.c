//
//  main.c
//  polynomials
//
//  Created by Joyce Chin on 2018/2/27.
//  Copyright © 2018年 Joyce Chin. All rights reserved.
//

#include <stdio.h>

int main()
{
    int m;
    int poly[3],i,square;
    int poly_ans[30]={0},j,power,poly_1[30]={0};
    scanf("%d",&m);
    while(m--){
        for(i=0;i<30;i++)poly_ans[i]=0;
        for(i=0;i<30;i++)poly_1[i]=0;
        for(i=0;i<=2;i++) scanf("%d",&(poly[i]));
        scanf("%d",&square);
        for(i=0;i<=2;i++) poly_1[i]=poly[i];
        power=2;
        square=square-1;
        if(square!=0){
            while(square--){
                for(i=0;i<=power;i++) poly_ans[i]=0;
                for(i=0;i<=power;i++){
                    for(j=0;j<=2;j++){
                        poly_ans[i+j]+=poly_1[i]*poly[j];
                    }
                }
                power=power+2;
                for(i=0;i<=power;i++) poly_1[i]=poly_ans[i];
            }
            for(i=0;i<=power;i++){
                if(i==0) printf("%d",poly_ans[i]);
                else printf(" %d",poly_ans[i]);
            }
        }
        else{
            for(i=0;i<=2;i++){
                if(i==0)printf("%d",poly[i]);
                else printf(" %d",poly[i]);
            }
        }
        printf("\n");
    }
    return 0;
}
