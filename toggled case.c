#include <ctype.h>
#include <string.h>

int main() {
    char str[200];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';  // remove newline

    for(int i = 0; str[i] != '\0'; i++) {
        if (islower(str[i]))
            str[i] = toupper(str[i]);
        else if (isupper(str[i]))
            str[i] = tolower(str[i]);
    }

    printf("Toggled case string: %s\n", str);

    return 0;
}
