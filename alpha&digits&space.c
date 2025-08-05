#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char str[200];
    int i, letters = 0, digits = 0, spaces = 0, words = 0;
    int inWord = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';  // remove newline

    for(i = 0; str[i] != '\0'; i++) {//sky is blue@ ind1
        char ch = str[i];//s

        if (isalpha(ch))
            letters++;

        if (isdigit(ch))
            digits++;

        if (isspace(ch))
            spaces++;

        if (!isspace(ch) && inWord == 0) {
            words++;
            inWord = 1;
        } else if (isspace(ch)) {
            inWord = 0;
        }
    }

    printf("\nAnalysis of your string:\n");
    printf("Alphabets : %d\n", letters);
    printf("Digits    : %d\n", digits);
    printf("Spaces    : %d\n", spaces);
    printf("Words     : %d\n", words);

    return 0;
}
