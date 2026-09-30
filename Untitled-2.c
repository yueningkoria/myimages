#include<stdio.h>
int main(){
    printf("sizeof(int)=%X\n",sizeof(int));
    int min1=0X00000001;
    int max1=0x7fffffff;
    unsigned int count1;
    int min2=0x80000000;
    int max2=0xffffffff;
    unsigned int count2;
    count1=max1-min1+1;
    count2=max2-min2+1;
    printf("%u\n",count1);
    printf("%u",count2);
    return 0;
    /*输出2147483647。。。。*/


}
