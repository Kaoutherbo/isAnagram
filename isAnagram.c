#include"main.h"

bool isAnagram(char *word1, char *word2) {
    int count1[256] = {0};  // Initialize an array to store character counts for word1.
    int count2[256] = {0};  // Initialize an array to store character counts for word2.

    int len1 = strlen(word1);
    int len2 = strlen(word2);

    // If the lengths of the two words are different, they can't be anagrams.
    if (len1 != len2) {
        return 0;
    }

    // Count the occurrences of characters in word1.
    for (int i = 0; i < len1; i++) {
        count1[(int)word1[i]]++;
        count2[(int)word2[i]]++;
    }

    // Compare character counts.
    for (int i = 0; i < 256; i++) {
        if (count1[i] != count2[i]) {
            return false;  // If counts are not equal for any character, they are not anagrams.
        }
    }

    return true;  // If counts are equal for all characters, they are anagrams.
}
