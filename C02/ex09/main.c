char *ft_strcapitalize(char *str);

int main() {
    char test1[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
    
    printf("Test 1: \"%s\" => \"%s\"\n", test1, ft_strcapitalize(test1));

    return 0;
}
