#include <stdio.h>
// prints ascii table of latin characters
void table_ascii(){
    int i = 0;
    for (i; i<26; i++){
        printf("%c\t%d\t", i+'a', i+'a');
        printf("%c\t%d\n", i+'A', i+'A');
    }
}
