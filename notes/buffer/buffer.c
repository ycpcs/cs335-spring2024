#include <string.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
    int value = 6;
    char one[7], two[7];

    strcpy(one, "one");
    strcpy(two, "two");
    
    printf("one: %s at %p\n", one, one);
    printf("two: %s at %p\n", two, two);

   
    printf("value: %d (0x%08x) at %p \n", value, value, &value);

    printf("Copying %d bytes\n", strlen(argv[1]));
    strcpy(two, argv[1]); 
}