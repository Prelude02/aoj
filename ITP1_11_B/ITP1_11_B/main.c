//
//  main.c
//  ITP1_11_B
//
//  Created by x16043xx on 2018/05/31.
//  Copyright © 2018年 x16043xx. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int s[6];
    int i,j;
    int answer[25];
    int tmp;
    int count=0;
    int top,front;
    for(i=0;i<6;i++){
        scanf("%d",&s[i]);
    }
    scanf("%d",&j);
    for(i=0;i<j;i++){
        scanf("%d",&top);
        scanf("%d",&front);
        if(top==s[0]){
            if(front==s[1]){
                printf("%d\n",s[2]);
            }if(front==s[2]){
                printf("%d\n",s[4]);
            }if(front==s[3]){
                printf("%d\n",s[1]);
            }if(front==s[4]){
                printf("%d\n",s[3]);
                
            }
        }else if(top==s[1]){
            if(front==s[0]){
                printf("%d\n",s[3]);
            }if(front==s[2]){
                printf("%d\n",s[0]);
            }if(front==s[3]){
                printf("%d\n",s[5]);
            }if(front==s[5]){
                printf("%d\n",s[2]);
            }
        }else if(top==s[2]){
            if(front==s[0]){
                printf("%d\n",s[1]);
            }if(front==s[1]){
                printf("%d\n",s[5]);
            }if(front==s[4]){
                printf("%d\n",s[0]);
            }if(front==s[5]){
                printf("%d\n",s[4]);
            }
        }else if(top==s[3]){
            if(front==s[0]){
                printf("%d\n",s[4]);
            }if(front==s[1]){
                printf("%d\n",s[0]);
            }if(front==s[4]){
                printf("%d\n",s[5]);
            }if(front==s[5]){
                printf("%d\n",s[1]);
            }
        }else if(top==s[4]){
            if(front==s[0]){
                printf("%d\n",s[2]);
            }if(front==s[2]){
                printf("%d\n",s[5]);
            }if(front==s[3]){
                printf("%d\n",s[0]);
            }if(front==s[5]){
                printf("%d\n",s[3]);
            }
            
        }else if(top==s[5]){
            if(front==s[1]){
                printf("%d\n",s[3]);
            }if(front==s[2]){
                printf("%d\n",s[1]);
            }if(front==s[3]){
                printf("%d\n",s[4]);
            }if(front==s[4]){
                printf("%d\n",s[2]);
            }
            
        }
        
        
    }
    
    
    return 0;
}
