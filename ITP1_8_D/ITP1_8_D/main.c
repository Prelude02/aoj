//
//  main.c
//  ITP1_8_D
//
//  Created by x16043xx on 2018/05/31.
//  Copyright © 2018年 x16043xx. All rights reserved.
//

#include <stdio.h>
#include <string.h>
int main(int argc, const char * argv[]) {
    char s[101];
    char p[101];
    int z=0;
    long int i,j;
    long int len_s;
    long int len_p;
    int judge=0;
    long int mmm;//?¨??????¨
    scanf("%s",s);
    len_s=strlen(s);
    scanf("%s",p);
    len_p=strlen(p);
    for(i=0;i<len_s;i++){
        judge=0;
        z++;
        for(j=0;j<len_p;j++){
            mmm=i+j;
            if(mmm>=len_s){
                mmm=mmm-len_s;
            }
            if(p[j]==s[mmm]){
                judge++;
            }if(judge==len_p){
                printf("Yes\n");
                z=0;
                break;
            }
        }if(z==0){
            break;
        }
        if(z==len_s){
            printf("No\n");
        }
    }
    
    
    return 0;
}
