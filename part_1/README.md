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
