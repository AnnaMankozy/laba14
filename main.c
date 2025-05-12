#include <stdio.h>
#include <string.h>


int main() {
    
    char s[100];
    char result[100];
    int i, length, dot_pos = -1;

    printf("Enter the line: ");
    scanf("%s", s); 

    length = strlen(s);

    for (i = length - 1; i >= 0; i-=1) {
        if (s[i] == '.') {
            dot_pos = i;
            break;
        }
    }

    if (dot_pos == -1 || dot_pos == length - 1) {
        printf("There is no period in the string or no characters after it.\n");
    } else {
        strncpy(result, s + dot_pos + 1, length - dot_pos - 1);
        result[length - dot_pos - 1] = '\0';

        printf("The substring after the last period: \"%s\"\n", result);
    }

    return 0;
}