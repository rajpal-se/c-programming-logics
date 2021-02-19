//      strcmp
// Compares the C string str1 to the C string str2.

#include <stdio.h>
#include <string.h>

void compare(char *s1, char *s2){
    int i = strcmp(s1, s2);
    if(i > 0)
        printf("S1 > S2");
    else if(i < 0)
        printf("S1 < S2");
    else
        printf("S1 = S2");
    printf("\n");
}

int main (){
    char a[] = {'a', 'b', 'c', '\0'};
    compare(a, "abc");      // S1 = S2
    compare("abc", "abc");  // S1 = S2
    compare("bbc", "abc");  // S1 > S2
    compare("abc", "bbc");  // S1 < S2
    compare("aBc", "abc");  // S1 < S2
    compare("abcd", "abc"); // S1 > S2
    compare("abc", "abcd"); // S1 < S2
    return 0;
}
