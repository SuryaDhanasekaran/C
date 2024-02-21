/*
String.h

strlen() -> gives the length of the string
strcpy() -> copies the string
strcmp() -> compares two strings
strcat() -> concatenates two strings
strrev() -> reverses the string
strchr() -> searches for a character in a string
strstr() -> searches for a string in a string
strtok() -> tokenizes the string
strlwr() -> converts the string to lowercase
strupr() -> converts the string to uppercase
strncpy() -> copies the string
strncat() -> concatenates two strings
strspn() -> returns the length of the longest initial segment that consists entirely of characters from the character set of the second string
strcspn() -> returns the length of the longest initial segment that consists entirely of characters not from the character set of the second string
*/

#include<stdio.h>
#include<string.h>
void main()
{
    char str[20];
    printf("Enter the string:");
    gets(str);
    printf("Length of string is %d",strlen(str));
    // printf("\nReverse of string is %s",strrev(str));
    printf("Uppercase of string is %s",strupr(str));
    printf("Lowercase of string is %s",strlwr(str));
}