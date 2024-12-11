#include <stdio.h>
#include <string.h>

void equalsTo(char FirstChar[], char SecondChar[]){
    int i;
    if (FirstChar[i] == SecondChar[i]) printf("The words are equal\n");
    else printf("The words are not equal\n");
}

void substringOf(char FirstChar[], char SecondChar[]) {
    if (strstr(FirstChar, SecondChar) != NULL) printf("Word 2 is a substring of word 1");
    else if (strstr(SecondChar, FirstChar) != NULL) printf("Word 1 is a substring of word 2");
    else printf("No substrings found");

}
int main() {
    char FirstWord[100] = {0}; char SecondWord[100] = {0};

    printf("Type in First Word\n"); scanf("%s", FirstWord);
    printf("Type in Second Word\n"); scanf("%s", SecondWord);

    equalsTo(FirstWord, SecondWord);
    substringOf(FirstWord, SecondWord);
    return 0;
}
