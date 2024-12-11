#include <stdio.h>
#include <string.h>
#include <ctype.h>

void string_upper(char *word){
    for(int i = 0; word[i]; i++){word[i] = toupper(word[i]);}
    printf("The word in uppercase is '%s'\n", word);
}

void string_lower(char *word){
    for(int i = 0; word[i]; i++){word[i] = tolower(word[i]);}
    printf("The word in lowercase is '%s'\n", word);
}

int main() {
    char word[100];

    printf("Enter a word: ");
    scanf("%s", word);

    int len = strlen(word) + 1;
    int mid = len / 2;
    int i, k;
    char leftHalf[100], rightHalf[100];
    for(i = 0; i < mid; i++) {leftHalf[i]= word[i];}leftHalf[i] = '\0';
    for(i = mid, k = 0; i <= len; i++, k++) {rightHalf[k]= word[i];}

    string_upper(word);
    string_lower(word);
    printf("The word split in two is '%s - %s'\n", leftHalf, rightHalf);

    return 0;
}
