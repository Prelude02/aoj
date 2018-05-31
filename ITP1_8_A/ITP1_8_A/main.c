//
//  main.c
//  ITP1_8_A
//
//  Created by x16043xx on 2018/05/31.
//  Copyright © 2018年 x16043xx. All rights reserved.
//

#include <stdio.h>
#include <string.h>
int main(int argc, const char * argv[]) {
    int i;
    long int j;
    char s[1201];
    char a[27]="abcdefghijklmnopqrstuvwxyz";
    char A[27]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    long int len;
    gets(s);
    len=strlen(s);
    for(j=0;j<len;j++){
        for(i=0;i<26;i++){
            if(s[j]==a[i]){
                s[j]=A[i];
            }else if(s[j]==A[i]){
                s[j]=a[i];
            }
        }
        printf("%c",s[j]);
    }
    printf("\n");
    return 0;
}
