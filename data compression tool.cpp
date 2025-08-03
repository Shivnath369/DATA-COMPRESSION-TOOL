#include <stdio.h>
#include <string.h>

// Function to perform Run-Length Encoding
void runLengthEncode(char *input) {
    int len = strlen(input);
    for (int i = 0; i < len; i++) {
        // Count occurrences of current character
        int count = 1;
        while (i < len - 1 && input[i] == input[i + 1]) {
            count++;
            i++;
        }
        // Print character and count
        printf("%c%d", input[i], count);
    }
    printf("\n");
}

int main() {
    char input[1000];

    printf("Enter a string to compress: ");
    scanf("%s", input);

    printf("Compressed string: ");
    runLengthEncode(input);

    return 0;
}

