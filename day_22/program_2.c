include<stdio.h>
int main() {
    char str[100];
    int i, len, count = 1;

    printf("Enter a string: ");
    gets(str); // Use gets() to read the string input
    
    for(i = 0; str[i] != '\0'; i++) 
    
{
    count=1;
        if(str[i] == '0') {
            continue;
        }
    }

    for(j=i+1; str[j] != '\0'; j++) {
        if(str[i] == str[j]) {
            count++;
            str[j] = '0'; // Mark this character as counted
        }
    }
    printf("The character '%c' occurs %d times.\n", str[i], count);

return 0;
}
