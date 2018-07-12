//
//  main.c
//  cycle_length1
//
//  Created by Joyce Chin on 2018/3/1.
//  Copyright © 2018年 Joyce Chin. All rights reserved.
//

#include <stdio.h>

int book[1000100];

int main()
{
    int p,q,r,i,count,length;
    while(1){
        scanf("%d%d",&p,&q);
        count=1;
        if(q==0) break;
        for(i=0;i<q;i++) book[i]=-1;
        while(1){
            r=(p*10)%q;
            p=r;
            if(book[r]==-1) book[r]=count;
            else{
                length=count-book[r];
                break;
            }
            count++;
        }
        printf("%d\n",length);
    }
    return 0;
}
