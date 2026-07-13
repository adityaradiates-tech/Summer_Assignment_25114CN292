#include <stdio.h>
#include <string.h>
int main()
{
    char str1[100], longest[100];
    int i=0, len=0, maxlen = 0;
    char word[100];
    printf("Enter a sentence: ");
    fgets(str1, sizeof(str1), stdin);

    while (1){
        if (str[i]! == ' )&&(str[i] != '\0') && (str[i] != '\n')) {
            word[len++] = str[i];
        } else {
            word[len] = '\0';
            if (len > maxlen) {
                maxlen = len;
                strcpy(longest, word);
            }
            len = 0;
        }
        len=0;
        if (str[i] == '\0' || str[i] == '\n') {
            break;
        }
        i++;

        printf("The longest word is: %s\n", longest);

return 0;



    }
}