#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool is_palindrome(const char *word){
    int len = strlen(word);
    int palindrome = 1;
    for (int i = 0; i < len / 2; i++){if (word[i] != word[len - 1 - i]){palindrome = 0;break;}}
    if (palindrome){printf("The word is a palindrome\n");}
    else {printf("The word is not a palindrome\n");}
}

void string_reverse(char *word){
    int len = strlen(word);
    for (int i = 0; i < len / 2; i++){
        char temp = word[i];
        word[i] = word[len - 1 - i];
        word[len - 1 - i] = temp;
    }
    printf("The word reversed is '%s'\n", word);
}

int main() {
    char word[100];
    printf("Enter a word: "); scanf("%s", word);

    int len = strlen(word);

    printf("The word contains %d letters\n", len);
    is_palindrome(word);
    string_reverse(word);
    return 0;
}
