#include <stdio.h>
#include <stdlib.h>
#include <direct.h>
#include <errno.h>

void find_error()
{
    if (errno == ERANGE)
        printf("Path exceeds max buffer length.\n");
    else if (errno == ENOMEM)
        printf("Memory cannot be allocated for path.\n");
}

int main()
{
    char *retptr = _getcwd(NULL, 1024);

    if (retptr == NULL)
    {
        printf("Get current working directory failed.\n");
        find_error();
        return 1;
    }

    printf("Current working directory: \n\n%s\n", retptr);
    free(retptr);
    return 0;
}
