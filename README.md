# CSF307-LABS
Task 3.1
Create a header file containing the structure Fruit. Your structure should minimally contain:
1. A string (That is, a char pointer) that represents the name of the fruit.
2. An integer that will be between 0 and 2 where:
    0 means the fruit is mostly sour
    1 means the fruit is mostly sweet
    2 means the fruit is mostly bitter
3. A floating point number to capture the price of that fruit.
   In your header file, define a type Fruit t that is equivalent to the structure you just created
   (type simplification).
   In your main function, create a Fruit t variable allocated in stack memory and one allocated
   in heap memory. Populate both with any information you like (imaginary fruits are welcome).
   Add a handful of printf statements printing contents of your fruits. Nothing crazy, just to check
   the data is there.
   Since you will be using malloc (), don’t forget to # include < stdlib .h > and most im-
   portantly, don’t forget to free() any memory when it’s no longer needed!
   Ü Task 3.2
   Extend your code from the previous task, so that the string which is the name of the fruit you
   allocated in heap, is also allocated in heap. Remember,
   1 c h a r * s t r = ”My S t r i n g ” ;
   is a string in stack memory. You have to allocate a string in heap memory and populate it
   with the name of the fruit!
   Please turn over
   1
   Ü Task 3.3
   This task is about making a multiplication table using a two-dimensional array.
   Allocate a two-dimensional array of integers with 10 rows and 5 columns in heap memory.
   Write code to populate this array so that it forms a multiplication table. Remember that in a
   multiplication table, the cell pa, bq (where a,b are indecies) holds the value a  b. In terms of
   your two-dimensional array that means that: arrrasrbs  a  b.
   You should not populate this table by hand. You must use loops to do that.
   Print some values from your populated multiplication table to make sure they are in line with
   what you expect.
   Finally, write code to free the memory allocated for this table appropriately.
   Ü Fun Task 3.4
   We looked some dangerous behaviours with pointers in the lecture. Try out local variable
   pointers, and observe behaviours we talked about in the lecture. Why doesn’t the value one
   such pointer points to, always get removed after the function returns?