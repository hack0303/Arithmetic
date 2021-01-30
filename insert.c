#include <stdio.h>
#include <stdlib.h>
//插入排序
int* sortByUsingInsertSort(int* array,int len)
{
    int* after_sorted=malloc(len*sizeof(int));//内存分配
    for(int x=0; x<len; x++)
    {//查看每一元素
        int me=array[x];//当前参照元素
        int change_start=0;
        short need_move=0;//
        if(x==0){//第一个元素插入的情况
        after_sorted[0]=me;
        continue;
        }
        for(int y=0; y<x; y++)
        {//参照元素前面
            if(after_sorted[y]>=me)
            {
                need_move=1;
              //printf("need move\n");
                change_start=y;
                break;//找到一个就停止后续比较
            }
        }
        if(!need_move){
            after_sorted[x]=me;
            continue;
        }
            for(int z=x; z>change_start; z--)
        {//依次顺移
            after_sorted[z]=after_sorted[z-1];
        }
        after_sorted[change_start]=me;
    }
    return after_sorted;
}
