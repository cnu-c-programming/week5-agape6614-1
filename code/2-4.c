#include <stdio.h>

long my_strtol(char *str, char **endptr){
    long result = 0;
    int i = 0;

    while(str[i] >= '0' && str[i] <= '9'){
        result = result * 10 + (str[i] - '0');
        i++;
    }

    *endptr = &str[i];

    return result;
}

int main(){
    char str[] = "2026hello";
    char *end;

    long val = my_strtol(str, &end);

    printf("%ld %s\n", val, end);

    return 0;
}
