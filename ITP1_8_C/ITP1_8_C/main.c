//
//  main.c
//  ITP1_8_C
//
//  Created by x16043xx on 2018/05/31.
//  Copyright © 2018年 x16043xx. All rights reserved.
//

#include <stdio.h>
#include <string.h>
int main(int argc, const char * argv[]) {
    int i;
    char ch;
    char a[26]="abcdefghijklmnopqrstuvwxyz";
    char A[26]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int add[26]={0};
    while ( scanf("%c", &ch)!= EOF ){
        for(i=0;i<26;i++){
            if(ch==a[i]){
                add[i]++;
            }else if(ch==A[i]){
                add[i]++;
            }
            
        }
    }
    for(i=0;i<26;i++){
        printf("%c : %d\n",a[i],add[i]);
    }
    return 0;
}
