//
//  main.c
//  Exercise4-5
//
//  Created by Karol Eryk Mikołajczuk on 15.03.2018.
//  Copyright © 2018 Karol Eryk Mikołajczuk. All rights reserved.
//

#include <stdio.h>

int main() {
    printf("Input word: ");
    char word[80];
    scanf("%s", word);
    int i = strlen(word);
    for (; i>=0; i--) {
        switch (word[i]) {
            case 'a':
            case 'A':
            case 'b':
            case 'B':
            case 'c':
            case 'C':
                word[i]='X';
                break;
            case 'd':
            case 'D':
            case 'e':
            case 'E':
            case 'f':
            case 'F':
                word[i]='Y';
                break;
            default:
                break;
        }
    }
    printf("\n%s\n",word);
    /*
    if (word[i]=='a' || word[i]=='A' || word[i]=='b' || word[i]=='B' || word[i]=='c' || word[i]=='C' ||) {
        word[i]='X';
    }else if (word[i]=='d' || word[i]=='D' || word[i]=='E' || word[i]=='e' || word[i]=='f' || word[i]=='F' ||){
        word[i]='Y';
    }
    */
    return 0;
}
