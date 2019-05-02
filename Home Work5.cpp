//
//  main.cpp
//  Home Work 5
//
//  Created by 何宗愷 on 2019/4/11.
//  Copyright © 2019 何宗愷. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[])
{
    int hour1,mim1,sec1,hour2,mim2,sec2,finhour,finmim,finsec,time;
    printf("請輸入起始時間：");
    scanf("%d:%d:%d", &hour1, &mim1, &sec1);
    printf("請輸入結束時間：");
    scanf("%d:%d:%d", &hour2, &mim2, &sec2);
    finhour = hour1-hour2;
    finmim  = mim1-mim2;
    finsec  = sec1-sec2;
    finhour = abs(finhour);
    finmim = abs(finmim);
    finsec = abs(finsec);
    time = finhour * 3600 + finmim * 60 + finsec;
    printf("\n兩個時間間隔秒數為: %d\n", time);
    return 0;
}
