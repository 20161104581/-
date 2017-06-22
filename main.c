//
//  main.c
//  坐标
//
//  Created by 20161104581 on 17/6/22.
//  Copyright © 2017年 20161104581. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {

        char filename[] = "/Users/c20161104581/Desktop/坐标/GPS170510.log"; //文件名
        FILE *fp;
        char StrLine[100];//每行最大读取的字符数
        char time[7];
        char jindu[2];
        int i;
    
        if((fp = fopen(filename,"r")) ==NULL) //判断文件是否存在及可读
        {
            printf("error!");
            return -1;
        }
        
        while (!feof(fp))//判断文件是否读到尾部//
        {
            fgets(StrLine,100,fp);  //读取一行//printf("$GPRM-,UTC时间, 定位状态,纬度,纬度半球,经度,经度半球,地面速率,地面航向,UTC日期, 磁偏角,磁偏角方向,模式指示\n");
            printf("%s\n", StrLine); //输出            for(i=0;i<6;i++)
                time[i]=StrLine[i+7];
            time[6]='\0';
            printf("时间： %s\n",time);
           
        }
        fclose(fp);                     //关闭文件
        return 0; 
    }
