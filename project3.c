#include<stdio.h>
int main() {
    char ch;
    printf("enter character :");
    scanf("%c", &ch);
    if((ch >= 'A') && (ch <= 'Z')) {
        printf("%c", ch = ch + 32);
    }
    else if ((ch >= 'a') && (ch <= 'z')) {
        printf("%c", ch = ch - 32);
    }
    return 0;
}