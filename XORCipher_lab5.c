#include <stdio.h>
#include <string.h>

void xorCipher(char *text, char key) {
    for (int i = 0; text[i] != '\0'; i++) {
        text[i] = text[i] ^ key;
    }
}

int main() {
    char msg[100];
    char key = 'K'; // you can change key
    printf("Enter message: ");
    fgets(msg, sizeof(msg), stdin);

    xorCipher(msg, key);
    printf("Encrypted: %s\n", msg);

    xorCipher(msg, key); // decrypting again
    printf("Decrypted: %s\n", msg);

    return 0;
}
