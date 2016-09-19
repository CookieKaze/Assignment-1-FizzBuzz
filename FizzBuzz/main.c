//
//  main.c
//  FizzBuzz
//
//  Created by Appuru on 2016-09-13.
//  Copyright © 2016 Erin Luu. All rights reserved.
//

/* Lighthouse Lab Assignment 1 - FizzBuzz
 Write a program that prints the numbers from 1 to 100. For the multiples of 3, print "Fizz" instead of the number and for the multiples of 5, print "Buzz" instead of the number. For numbers which are multiples of both 3 and 5 print "FizzBuzz"
 */
 

#include <stdio.h>

int main() {
    
    // Print 1 to 100
    for (int counter = 1; counter <= 100; counter++) {
        if (counter%3==0 || counter%5==0){
            if (counter%3==0 && counter%5!=0){
                printf("Fizz\n");
            } else if(counter%3!=0 && counter%5==0){
                printf("Buzz\n");
            } else {
                printf("FizzBuzz\n");

            }
        }
        else{
            printf("%d\n", counter);
        }
        
    
    }
    return 0;
}
