//
//  main.c
//  Exercise4-1
//
//  Created by Karol Eryk Mikołajczuk on 15.03.2018.
//  Copyright © 2018 Karol Eryk Mikołajczuk. All rights reserved.
//

/*
 (ii) Test your program. What happens, if you enter some upper case characters and numbers?
 
 answer: stay in upper. stay as a number.
*/


#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main ()
{
    char word [80];
    int i,n;
    printf("This program converts words to upper case.\n");
    printf(" Please write a word: ");
    scanf("%s",&word);
    printf("Your input is: %s\n",word);
    n = strlen(word);
    printf("The length of the word is: %d\n",n);
    /*
    for (i=0;i<n;i++){
        word[i]=toupper(word[i]);
    }
    */
    
    i=0;
    while (i<n) {
        word[i]=tolower(word[i]);
        i++;
    }
    
    printf("Your word in upper case is: %s\n",word);
    return 0;
}
