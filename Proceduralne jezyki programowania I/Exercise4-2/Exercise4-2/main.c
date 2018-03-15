//
//  main.c
//  Exercise4-2
//
//  Created by Karol Eryk Mikołajczuk on 15.03.2018.
//  Copyright © 2018 Karol Eryk Mikołajczuk. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int main() {
    printf("Input word: ");
    char array[100];
    scanf("%s", array);
    
    int length_of_array = strlen(array);
    printf("Opposite: ");
    for(;length_of_array>=0;length_of_array--){
        printf("%c",array[length_of_array]);
    }
    printf("\n");
    return 0;
}
