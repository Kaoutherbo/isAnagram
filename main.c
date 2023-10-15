#include"main.h"


int main() {

char *word1 = getString("Enter the first word ");
char *word2 = getString("Enter the second word ");

    printf("%s",word1);
    printf("%s",word2);

if (isAnagram(word1, word2))
{
    printf("'%s' and '%s' are anagrams.\n", word1, word2);
} else {
    printf("'%s' and '%s' are not anagrams.\n", word1, word2);
}
    
    free(word1);
    free(word2);
    
    return 0;
}


