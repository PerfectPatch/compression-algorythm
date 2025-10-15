# Part_1

This is based on what I learned from the first part. 
I became a bit interested in the topic of alignment and different data types in C. I understood the differences between various types. I also noticed the peculiarity that it’s important to use the correct data type, not just any. It’s all about alignment specifics: a data type should be placed at a memory address that’s a multiple of its size. Because of this, if we have a `char` object followed by an `int`, a 3-byte gap appears in between.
