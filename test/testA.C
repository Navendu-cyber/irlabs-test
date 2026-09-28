#include <stdio.h>
#include <string.h>

void copy_name(const char *name)
{
    char buffer[16];

    strcpy(buffer, name);

    printf("Name: %s\n", buffer);
}

int main(void)
{
    copy_name("Navendu");
    return 0;
}
