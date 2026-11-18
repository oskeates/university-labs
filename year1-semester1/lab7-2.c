#include <stdio.h>

int main(void) {

    char words[1000];

    fgets(words, sizeof(words), stdin);

    for (int i = 0; words[i] != '\0'; i++) {
        if (words[i] >= 'A' && words[i] <= 'Z') {
            words[i] += 'a' - 'A';
        } else if (words[i] >= 'a' && words[i] <= 'z') {
            words[i] += 'A' - 'a';
        }
    }

    printf("%s", words);
}