//
//  main.c
//  Exercise4-3
//
//  Created by Karol Eryk Mikołajczuk on 15.03.2018.
//  Copyright © 2018 Karol Eryk Mikołajczuk. All rights reserved.
//

#include <stdio.h>

int main ()
{
    char letter;
    printf("This program prints the alphabet .\n");
    /*
    for (letter='a';letter<='z';letter++){
        printf ("%c",letter);
    }
    */
    letter='z';
    while (letter>='a') {
        printf("%c",toupper(letter));
        letter--;
    }
    
    printf("\n");
    return 0;
}
