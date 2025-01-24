#include <stdio.h>

// Function prototype
char *ft_strncpy(char *dest, char *src, unsigned int n);

int main(void)
{
    char dest[20];  // Make sure the destination array is large enough
    char *src = "Hello, World!";
    unsigned int n;

    // Test case 1: Copy first 5 characters
    n = 5;
    ft_strncpy(dest, src, n);
    printf("Test 1 - First %u characters: \"%s\"\n", n, dest);

    // Test case 2: Copy first 20 characters (larger than source string length)
    n = 20;
    ft_strncpy(dest, src, n);
    printf("Test 2 - First %u characters: \"%s\"\n", n, dest);

    // Test case 3: Copy exactly the length of the source string
    n = 13;
    ft_strncpy(dest, src, n);
    printf("Test 3 - First %u characters: \"%s\"\n", n, dest);

    // Test case 4: Copy 0 characters
    n = 0;
    ft_strncpy(dest, src, n);
    printf("Test 4 - First %u characters: \"%s\"\n", n, dest);

    return 0;
}
