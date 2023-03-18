#include <stdio.h>
#include <string.h>

int main()
{
    char string1[] = "new string"; // string declaration and initialization
    char string2[] = "fixed";
    printf("%s \n%s", string1, string2);

    // string methods
    // we need to include <string.h> for that

    char str2[] = "This is in CAPITAL";

    // strlwr() converts everything to lowercase
    strlwr(str2);
    printf("\n%s", str2);

    // strupr() converts everything to uppercase
    strupr(str2);
    printf("\n%s", str2);

    // strcat() concatenates or adds two strings

    char str3[] = "add this";

    printf("\n%s", strcat(str2, str3)); // adds str3 to the end of str2

    // strncat() concatenates a given number of characters from the second string to the first string

    char str5[] = "firstthreecharacters";
    printf("\n%s", strncat(str3, str5, 5)); // adds first five characters from str5 to the end of  str3

    // strcpy() copies the value of one string into another
    printf("\n%s", strcpy(str5, str3)); // copies str3 into str5

    // strncpy() copies a given number of characters from one string into another

    printf("\n%s", strncpy(str2, str3, 2)); // copies first two characters of str3 into str2

    // strset() sets all the characters in a string to a given character
    char strnew[] = "change this";

    strset(strnew, 'r'); // changes all the characters in strnew with the given character r
    // there can only characters be passed as arguments and not strings

    // strset(strnew,"changed") // this will throw an error

    // strnset() sets a given number of characters in a string to a given character

    strnset(strnew, 'a', 5); // changes the first 5 characters in strnew with s

    printf("\n%s", strnew);

    // strrev() reverses a string
    char str[] = "reverse this";
    printf("\n%s", strrev(str));

    // strlen() finds the length of a given string

    printf("\n%d", strlen(str)); // we use %d here because length of the string is returned in a number that is an integer

    // strcmp() compares all the characters between two strings
    // if characters are same it returns 0 else it returns some other number

    char strr1[] = "this";
    char strr2[] = "not this";
    printf("\n%d", strcmp(strr1, strr2));
    // its returning 1 so the strings are not the same

    char strr3[] = "newstr";
    char strr4[] = "newstr";
    printf("\n%d", strcmp(strr3, strr4));
    // its returning 0 here so they are same
    // the strings should be exactly the same even a space will make the strings different

    // strncmp() compares a given number of characters of two strings

    printf("\n%d\n", strncmp(strr2, strr3, 5)); // compares first 5 characters of strr2 with strr3

    // this is returning a number other than 0 so the characters are not the same

    printf("\n%d", strncmp(strr2, strr3, 0)); // compares the first character of strr2 with strr3

    // this is returning 0 so the characters are same

    // stricmp() compares two strings while ignoring case sensitivity

    char strr5[] = "CAPITAL";
    char strr6[] = "capital";
    printf("\n%d", strcmp(strr5, strr6)); // doesnt return 0 due to case sensitivity


    printf("\n%d", stricmp(strr5, strr6)); // returns 0 due to ignoring of case sensitivity
  


    // strnicmp() compares a given number of characters of two string while ignoring case sensitivity
    char strr7[] = "not capital";
    printf("\n%d", strnicmp(strr6, strr7, 5));
    // this doesnt return 0 since all the characters are not equal
    printf("\n%d", strnicmp(strr5, strr6, 5));
    // compares the first 5 characters of strr5 with strr6 while ignoring case sensitivity

    return 0;
}