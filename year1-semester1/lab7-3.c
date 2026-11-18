#include <stdio.h>

int main (void) {
    char words[9999];

    printf("Enter a sentence: ");
    fgets(words, sizeof(words), stdin);

    for (int i = 0; words[i] != '\0'; i++) {
        if (i == 0 || words[i - 1] == ' ') {
            if (words[i] >= 'a' && words[i] <= 'z') {
                words[i] += 'A' - 'a';
            }
        } else {
                if (words[i] >= 'A' && words[i] <= 'Z') {
                    words[i] += 'a' - 'A';
                }
        }
    }

    printf("Updated sentence: ");
    printf("%s", words);
}