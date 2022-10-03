# Automatic and dynamic allocation, malloc and free

The malloc function is used to allocate a certain amount of memory during the execution of a program. It will request a block of memory from the heap. If the request is granted, the operating system will reserve the requested amount of memory and malloc will return a pointer to the reserved space.

When the amount of memory is not needed anymore, you must return it to the operating system by calling the function free.

## Automatic allocation

When you declare variables or when you use strings within double quotes, the program is taking care of all the memory allocation. You do not have to think about it.

## Why would I need dynamic allocation?

So far we only have seen functions and programs that had fixed inputs. What happens when we do not know in advance how much memory you need and we will only know this at runtime, after compilation?

For instance, imagine we have to create a program that will store all the words contained in a file in an array. That file is passed as an argument to our program. There is no way we could know in advance how many words the file will contain. We can not declare a big array like char \*words[1024]; and assume that there will never be more than 1024 words in the file. That’s when malloc and friends come to the rescue, and will permit us to allocate dynamically the amount of memory we need.

## Dynamic allocation

### Malloc

The malloc function allocates a specific number of bytes in memory and returns a pointer to the allocated memory. This memory will have read and write permissions.
