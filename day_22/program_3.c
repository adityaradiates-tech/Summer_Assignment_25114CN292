#include <stdio.h>
int main() {
    char str[100];
    int i, j,count = 1;
    printf("Enter a string: ");
    gets(str); 
    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] == '0') {
            continue;
        }
        for(j = i + 1; str[j] != '\0'; j++) {
            if(str[i] == str[j]) {
                count++;
                str[j] = '*'; // Mark this character as counted
            }
        }
        printf("The character '%c' occurs %d times.\n", str[i], count);
    }
    return 0;
}