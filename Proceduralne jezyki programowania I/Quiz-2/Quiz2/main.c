//
//  main.c
//  Quiz2
//
//  Created by Karol Eryk Mikołajczuk on 14.03.2018.
//  Copyright © 2018 Karol Eryk Mikołajczuk. All rights reserved.
//
//  Created on Mac OSX

#include <stdio.h>

int main() {
    int a=1;
    for(;a<=100;a++){
        if(a%3!=0){
            printf("%d\n",a);
        }else{
            printf("X\n");
        }
    }
    return 0;
}
