#include <stdio.h>

int ft_str_is_uppercase(char *str);

int main() {
    char *test1 = "HELLO";
    char *test2 = "hElL";
    char *test3 = "hey";
    char *test4 = "";
    
    printf("Test 1: \"%s\" => %d\n", test1, ft_str_is_uppercase(test1));
    printf("Test 2: \"%s\" => %d\n", test2, ft_str_is_uppercase(test2));
    printf("Test 3: \"%s\" => %d\n", test3, ft_str_is_uppercase(test3));
    printf("Test 4: \"%s\" => %d\n", test4, ft_str_is_uppercase(test4));
    
    return 0;
}
