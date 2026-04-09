#include <stdio.h>
#include <string.h>

int main() {
    char str[100], temp;
    int i, n;

    printf("Enter a string: ");
    gets(str);
    printf("Enter number of rotations: ");
    scanf("%d", &n);

    int len = strlen(str);

    while (n--) {
        temp = str[len - 1];
        for (i = len - 1; i > 0; i--) {
            str[i] = str[i - 1];
        }
        str[0] = temp;
    }

    printf("String after right rotation: %s\n", str);

    return 0;
}
