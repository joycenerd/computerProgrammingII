# Binary Conversion

hint:
* 把二進位的數字當字串讀進來，不要把它當十進位的數字讀進來
* 一個digit一個digit做，做完再乘2
* 如果輸入中有包含數字和字串時可以用sscanf可抓出你想要的形式:
   `gets(line);sscanf(line,“%d”,&n);` 抓出line字串中的數字
* k<<=1:左移位代表*2，k|=1:k和1做bit or
* 用fgets而不是gets的原因是fgets有控制字串長度而gets沒有
  ->避免其他資料被蓋掉
* strtoll():可以自動轉進位

其中：

```c
for(j=0; j<len; j++){
                num<<=1;  //k向左一1格代表k*2的意思
                if(str[j]=='1') num|=1;   //如果k是1話，將k+1
                printf("%d\n",num);
            }
```

![](https://i.imgur.com/QRI2uM6.jpg)
