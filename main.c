#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct p Person;

struct p {
    int age;
    char* firstName;
    char* lastName;
    void(*printFullName)(char* firstName , char* lastName);
};



int sum(int a , int b) {
    return a + b;
}

int main() {

    Person person;
    person.age = 30;
    person.firstName = "reza";
    person.lastName = "yari";
    const char* addToFirstName = "test";    
    long long newLen = strlen(person.firstName) + strlen(addToFirstName);


    strcat_s(person.firstName , newLen , addToFirstName);
    printf("%s\n" , person.firstName);

    // if (result == NULL || *result == -1) {
    //     puts("somthing goes wrong!");
    //     exit(-1);
    // }
    // person.firstName = person.firstName + "test";

    printf("%s\n" , person.firstName);

    printf("%d\n" , person.age);
    
    

    // printf("%d\n" , result);
    return 0;
}


