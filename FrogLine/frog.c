#include <stdio.h>
#define N  10010
int book[2][N];   //宣告在global怕記憶體不夠
int cell[N];

 int main()
 {
     int n,m,i,j,p,q,k,cycle,flag;
     while(1){
        scanf("%d%d",&n,&m);
        if(n==0) break;
        for(i=0;i<n;i++) scanf("%d",&cell[i]);
        while(m--){
            for(i=0;i<2;i++){
                for(j=0;j<n;j++){
                    book[i][j]=-1;   //用一個二維陣列紀錄青蛙的狀態初始為-1
                }
            }
            scanf("%d%d",&p,&q);
            i=0;flag=0;
            while(1){
                    //跟循環小數一樣的判斷方式
                if(book[(q+1)/2][p]==-1) book[(q+1)/2][p]=i;   //如果q=-1->book[0][]，如果q=1->book[1][]
                else {
                    cycle=i-book[(q+1)/2][p];    
                    flag=1;
                    break;
                }
                if(cell[p]<0){
                        q=-q;
                        k=-cell[p];  //不可以直接寫cell[p]=-cell[p]，一定要把值指派給新的半數k
                                    //因為cell[p]不可以被改變其直，後續的側資還要用
                }
                else k=cell[p];
                p=p+q*k;   //青蛙的下一個位置
                if(p<0 || p>=n) break; //代表青蛙已經跳出界
                i++;
            }
            if(flag==1) printf("Cycle %d\n",cycle);
            else{
                if(p<0) printf("Backward\n");
                else if(p>=n) printf("Forward\n");
            }
        }
     }
     return 0;
 }
