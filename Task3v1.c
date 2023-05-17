//
// Created by Ashley Eatly on 10/05/2023.
//

#include "Fruit.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[]) {
//    In your main function, create a Fruit t variable allocated in stack memory and
//    another fruit_t in heap memory.
//    Populate both with any information you like (imaginary fruits are welcome).
//    Add a handful of printf statements printing contents of your fruits. Nothing crazy, just to check
//    Since you will be using malloc (), don’t forget to # include <stdlib

    // Stack
    Fruit_t fruit1 = {.name = "BangNana", .taste = 0, .price = 123.5};
    printf("fruit name: %s taste: %d price %3.2f\n",fruit1.name, fruit1.taste, fruit1.price);
    // Change
    fruit1.name = "Orange";
    printf("fruit name: %s taste: %d price %3.2f\n",fruit1.name, fruit1.taste, fruit1.price);

    // Stack not initialised
    Fruit_t fruitA;
    fruitA.name = "Grapefruit";
    fruitA.price = 123.9;
    fruitA.taste = 2;
    printf("fruit name: %s taste: %d price %3.2f\n",fruitA.name, fruitA.taste, fruitA.price);

    // Heap because its a pointer everything is on the stack
    Fruit_t *fruit3;
    fruit3  = (Fruit_t *)malloc(sizeof(Fruit_t));
    fruit3->price = 123.0;
    fruit3->taste = 3;
    // Allocate String on stack
    fruit3->name = "AppleApple";
    printf("fruit name: %s taste: %d price %3.2f\n",fruit3->name, fruit3->taste, fruit3->price);
    free(fruit3);

    // Heap
    Fruit_t *fruit4;
    fruit4  = (Fruit_t *)malloc(sizeof(Fruit_t));
    fruit4->price = 126.0;
    fruit4->taste = 2;
    fruit4->name = "AppleAppleChuck";
    printf("fruit4 name: %s taste: %d price %3.2f\n",fruit4->name, fruit4->taste, fruit4->price);
    free(fruit4);

    fruit4  = (Fruit_t *)malloc(sizeof(Fruit_t));
    fruit4->price = 126.0;
    fruit4->taste = 2;
    char * FruitName = "Jam fruit";
    // strcpy(fruit2->name,FruitName); no
    fruit4->name = FruitName;
    printf("fruit name: %s taste: %d price %3.2f\n",fruit4->name, fruit4->taste, fruit4->price);
    free(fruit4);

    return 0;
}
