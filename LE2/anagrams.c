#include <stdio.h>
#include <ctype.h> /* toupper, isalpha */
#include <stdbool.h>

// global variables
int same = 1, occurrences1[26], occurrences2[26];
char c;

// function protorypes
void scan_now(int occurrences[26]);
bool is_anagram(int occurrences1[26], int occurrences2[26]);

// main function
int main(){
	printf("Enter first word: ");          scan_now(occurrences1);     // passes the occurrences1 array to the scan_now function
    printf("Enter second word: ");         scan_now(occurrences2);     // passes the occurrences2 array to the scan_now function
    
    if(is_anagram(occurrences1, occurrences2)){     // conditional that has the result of the is_anagram as the condition
        printf("The words are anagrams.\n");        // if the variable same remains as 1 / all indexes are identical
    }
    else{
        printf("The words are not anagrams.\n");    // if the variable same changes to 0 / at least one index is not identical
    }
}

// function that scans the two words
void scan_now(int occurrences[26]){
    while ((c = getchar()) != '\n'){            // loops through every charachter of the word
        if (isalpha(c)){                        // checks if it is in the alphabet  
            occurrences[toupper(c) - 'A']++;    // increments dthe element of the said index         
        }
    }
}

// bool that checks if the 2 words are anagrams
bool is_anagram(int occurrences1[26], int occurrences2[26]){
    for (int i = 0; i < 26; i++) {                              // iterates through numbers 0-26
        if (occurrences1[i] != occurrences2[i]) {               // uses iterations as the index of occurrences 1 and 2, and compares the elements of the same index if they are not same
            same = 0;                                           // if the elements are not same, the variable same will be set to 0 or false
            break;                                              // break to cut the function short if there is an unmatched index
        }
    }
    return same;
}