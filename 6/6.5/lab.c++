#include <stdio.h>
#include <string.h>
#define MAX 100
int count_vowels(char *s){
    int c = 0;
    while (*s){
        if (strchr("aeiouAEIOU", *s))
            c++;
        s++;
    }
    return c;
}
int main(){
    char str[MAX];
    int v;
    printf("Input Word: ");
    if (!fgets(str, MAX, stdin)) return 1;
    str[strcspn(str, "\n")] = '\0';
    v = count_vowels(str);
    printf("\n--- STRING ANALYSIS REPORT ---\n");
    printf("Input String: \"%s\"\n", str);
    printf("Total Vowel Count: %d\n", v);
    return 0;
}