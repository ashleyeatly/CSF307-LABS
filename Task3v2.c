//
// Created by Ashley Eatly on 10/05/2023.
//

#include "Task3v2.h"
#include "Fruit.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

// Extend your code from the previous task, so that the string which is the name of the fruit you
// allocated in heap, is also allocated in heap. Remember,
// char * str = ”My String ” ;
//is a string in stack memory.
// You have to allocate a string in heap memory and populate it
//with the name of the fruit!

int main(int argc, char* argv[]) {
//    In your main function, create a Fruit t variable allocated in stack memory and
//    another fruit_t in heap memory.
//    Populate both with any information you like (imaginary fruits are welcome).
//    Add a handful of printf statements printing contents of your fruits. Nothing crazy, just to check
//    Since you will be using malloc (), don’t forget to # include <stdlib

    // Heap because its a pointer everything is on the stack
    Fruit_t *fruit3;
    fruit3  = (Fruit_t *)malloc(sizeof(Fruit_t));
    fruit3->price = 123.0;
    fruit3->taste = 3;
    //make sure have space for string plus null
    fruit3->name = (char *)malloc(sizeof(char)*(strlen("AppleApple")+1));
    strcpy(fruit3->name,"AppleApple");
    printf("fruit name: %s taste: %d price %3.2f\n",fruit3->name, fruit3->taste, fruit3->price);
    free(fruit3->name);
    free(fruit3);

    Fruit_t *fruit4;
    fruit4  = (Fruit_t *)malloc(sizeof(Fruit_t));
    fruit4->price = 126.0;
    fruit4->taste = 2;
    fruit4->name = (char *)malloc(sizeof(char)*(strlen("AppleAppleChuck")+1));
    strcpy(fruit4->name,"AppleAppleChuck");
    printf("fruit4 name: %s taste: %d price %3.2f\n",fruit4->name, fruit4->taste, fruit4->price);
    free(fruit4->name);
    free(fruit4);


    return 0;
}
