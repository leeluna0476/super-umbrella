#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* solution(const char* my_string, int n) {
    char* answer = malloc(sizeof(char) * (n + 1));
    
    int len = (int)strlen(my_string);
    
    strncpy(answer, my_string + len - n, n);

    return answer;
}
