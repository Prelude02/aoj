//
//  main.c
//  ITP1_8_B
//
//  Created by x16043xx on 2018/05/31.
//  Copyright © 2018年 x16043xx. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int i;
    int num;
    int add;
    char number[1001];
    while(1){
        add=0;
        scanf("%s",number);
        if(number[0]=='0'){
            break;
        }
        for(i=0;number[i]!='\0';i++){
            num=number[i]-'0';
            add+=num;
            number[i]='0';
        }
        printf("%d\n",add);
        
        
    }
    return 0;
}
