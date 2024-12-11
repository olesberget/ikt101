#include <stdio.h>
#include <string.h>
#include <ctype.h>

void alphabet(char *str){
    int count[26] = {0};
    for (int i = 0; i < strlen(str); i++){
        char c = str[i];
        if (isalpha(c)){
            c = tolower(c);
            count[c - 'a']++;
        }
    }
    for (char c = 'a'; c <= 'z'; c++){printf("'%c' : %d\n", c, count[c - 'a']);}
}

int main() {
    char str[100];
    printf("Enter a string:");
    fgets(str, sizeof(str), stdin);

    alphabet(str);
    return 0;
}
