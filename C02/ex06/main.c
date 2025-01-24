#include <stdio.h>

int ft_str_is_printable(char *str);

int main() {
    char *test1 = "HelloWorld\n";
    char *test2 = "Hello123";
    char *test3 = "\n";
    char *test4 = "";
    
    printf("Test 1: \"%s\" => %d\n", test1, ft_str_is_printable(test1));
    printf("Test 2: \"%s\" => %d\n", test2, ft_str_is_printable(test2));
    printf("Test 3: \"%s\" => %d\n", test3, ft_str_is_printable(test3));
    printf("Test 4: \"%s\" => %d\n", test4, ft_str_is_printable(test4));
    
    return 0;
}
