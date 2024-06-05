# How to Get Current Working Directory
### [C/C++](#c)
### [References](#ref)

## How to Get Current Working Directory in C/C++ (Windows) <a name="c"></a>
In C, we can use the `_getcwd()` function from the `direct.h` library.

```c
char *retptr = _getcwd(NULL, 1024);

if (retptr == NULL)
{
    printf("Get current working directory failed.\n");
    return 1;
}

printf("Current working directory: \n\n%s\n", retptr);
free(retptr);
```

## References <a name="ref"></a>
- [**Get The Current Working Directory Using _getcwd() On Windows | C Programming Tutorial**](https://www.youtube.com/watch?v=n2iSn6zGB5A) | [Source Code](https://github.com/portfoliocourses/c-example-code/blob/main/_getcwd.c)
- [**Find out the current working directory in C/C++**](https://www.tutorialspoint.com/find-out-the-current-working-directory-in-c-cplusplus)
