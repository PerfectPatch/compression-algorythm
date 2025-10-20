# Part_1

This is based on what I learned from the first part. 
I became a bit interested in the topic of alignment and different data types in C. I understood the differences between various types. I also noticed the peculiarity that it’s important to use the correct data type, not just any. It’s all about alignment specifics: a data type should be placed at a memory address that’s a multiple of its size. Because of this, if we have a `char` object followed by an `int`, a 3-byte gap appears in between.

I’ve more or less started using the ternary operator — it’s a convenient thing: `condition ? value_if_true : value_if_false;`. I like that you can make all sorts of short forms, like in `(for variable; condition; operation)`, where you don’t even have to use `{}`. Also, just for fun, I can write everything in one line if I want to.

## `reverse_arr.c`
When I was writing the program reverse_array.c, I made a mistake by not specifying the array size, which caused the values to print incorrectly.
I had a line like this:
```c
reverse_arr[];
```
which resulted in an error because the size wasn’t defined.
As a result, it started printing incorrect values like 7 8 7 6 5 4 4 5 6...


## [Conditionals](https://www.youtube.com/watch?v=-JMSaLRqsgo&list=PLBlnK6fEyqRgZq4a-SMViZr-V8jlvCioJ&index=2)

```c
int x = 2;

switch(x)
{
  case 1: printf("x is 1");
    break;
  case 2: printf("x is 2");
    break;
  case 3: printf("x is 3");
    break;
  default: printf("x is a
number other than 1, 2, ans 3");
    break;
}
```
```c
x is 2
```

## Functions in C

`main() function` -  starting point of C program. 

### Example:
```c
return_type function_name(parameter_list) {
    // body of the function
}
```


```c
#include <stdio.h>

void fun()
{
  printf("fun() called \n");
}

int main(void){
  printf("Before calling fun()"); 
  fun();
  fun();
  printf("After calling fun()")  
  return 0;
}
```

For this section, I used the following resources:
1. https://www.geeksforgeeks.org/c/c-programming-language/