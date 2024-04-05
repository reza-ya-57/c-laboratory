#include <stdio.h>
#include <stdlib.h>
#include <string.h>


// functions definition
char* concat_string(char* str1 , char* str2 , const char* with);


int main() {
    char* firstName = malloc(5);
    char* lastName = malloc(5);
    char* result = concat_string(firstName , lastName , "");
    printf("result is: %s\n" , result);
    return 0;
}

char* concat_string(char* str1 , char* str2 , const char* with){
    if (with == NULL) {
        printf("with is empty");
    }
    return "test";
}


