#include <stdio.h>

char *ft_strlowcase(char *str);

int main() {
    char test1[] = "HELLO";
    char test2[] = "HellO";
    char test3[] = "hell";
    char test4[] = "";
    
    printf("Test 1: \"%s\" => \"%s\"\n", test1, ft_strlowcase(test1));
    printf("Test 2: \"%s\" => \"%s\"\n", test2, ft_strlowcase(test2));
    printf("Test 3: \"%s\" => \"%s\"\n", test3, ft_strlowcase(test3));
    printf("Test 4: \"%s\" => \"%s\"\n", test4, ft_strlowcase(test4));
    
    return 0;
}
