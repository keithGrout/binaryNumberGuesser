//
//  main.c
//  binaryNumberGuesser
//
//  Created by Keith on 8/6/13.
//  Copyright (c) 2013 Appology. All rights reserved.
//

#include <stdio.h>
#include <ctype.h>


int main(int argc, const char * argv[])
{
    
    int guess = 50;
    char response;
    int highLimit = 100;
    int lowLimit = 0;
    
    
    printf("Pick an integer from 1 to 100. I will try to guess it.\n");
    
    printf("\nOkay, my first guess is %d. Is that too high, too low, or correct?\n", guess);
    printf("(Please enter h for high, l for low, and c for correct.)\n");
    while ((response = getchar()) != 'c')
    {
        if (tolower(response) == 'h') //tolower() allows user to enter upper or lowecase
        {
            //if its too high we adjust the high limit and guess in between the high and low limits
            highLimit = guess;
            guess = (highLimit + lowLimit) / 2;
            
        }
        if (tolower(response) == 'l')
        {
            //if its too low we adjust the low limit and guess in between the high and low limits
            lowLimit = guess;
            guess = (highLimit + lowLimit) / 2;
        }
        //removes any characters left in the buffer
        while (getchar() != '\n')
        {
            continue;
        }
        
        //ask until we 'guess' the number.
        printf("Okay, how about %d?", guess);
    }
    printf("See... Not bad.");
    
    
    return 0;
}
