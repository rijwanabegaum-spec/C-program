#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char line[1000];
    int characters = 0, words = 0, lines = 0;

    printf("Enter text (type '//' on a new line to stop):\n");

    while (fgets(line, sizeof(line), stdin)) {
        if (strcmp(line, "//\n") == 0 || strcmp(line, "//\r\n") == 0)
            break;

        lines++;

        int i = 0, inWord = 0;
        while (line[i] != '\0') {
            char ch = line[i];
            characters++;

            if (isspace(ch)) {
                inWord = 0;
            } else if (!inWord) {
                inWord = 1;
                words++;
            }

            i++;
        }
    }

    printf("\n--- Results ---\n");
    printf("Characters: %d\n", characters);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);

    return 0;
}