#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* IntToString(int x){
    int length = snprintf( NULL, 0, "%i", x );
    char* str = malloc( length + 1);
    snprintf( str, length + 1, "%i", x );
    return str;
}

char* concat(const char *s1, const char *s2)
{
    char *result = malloc(strlen(s1) + strlen(s2) + 1); // +1 for the null-terminator
    // in real code you would check for errors in malloc here
    strcpy(result, s1);
    strcat(result, s2);
    return result;
}

int main(void) { //початок програми
    int o = 24, bazza = 3;
    printf("Введіть десяткове число ");
    scanf("%i", &o);
    printf("Введіть нову базу для числа ");
    scanf("%i", &bazza);

    if (bazza > 10) {
      printf("bazza > 10");
      return -1; 
    }

    char* s = "";
    while (o > 0) {
        s = concat(IntToString(o % bazza), s);
        o = o / bazza;
    }
    printf("%s\n", s);
}
