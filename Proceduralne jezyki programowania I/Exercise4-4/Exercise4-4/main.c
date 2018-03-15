//
//  main.c
//  Exercise4-4
//
//  Created by Karol Eryk Mikołajczuk on 15.03.2018.
//  Copyright © 2018 Karol Eryk Mikołajczuk. All rights reserved.
//

#include <stdio.h>

int main() {
    printf("Input number: ");
    int a,i=0,j;
    scanf("%d",&a);
    
    for(;i<=a;i++){
        for(j=0;j<=i;j++){
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}
