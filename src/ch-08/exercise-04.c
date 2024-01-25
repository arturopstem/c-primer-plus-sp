#include <ctype.h>
#include <stdio.h>

int main(void)
{
    char word[20];
    int w_count;
    int l_count;
    int letters;
    int state;
    int index;
    char ch, prev;

    w_count = 0;
    l_count = 0;

    printf("Write some text (EOF to end):\n");
    while ((state = scanf("%s", word)) != EOF && state == 1)
    {
        letters = 0; // reset the number of letter in this string
        index = 0;   // reset index used to traverse word array
        prev = '\0'; // initial prev character is NUL
        while ((ch = word[index++]) != '\0')
        {
            // if it is not ASCII skip it. (ç, ñ, ß, etc)
            if (!isascii(ch))
            {
                continue;
            }
            // If previous char was punctation besides single quote and
            // other letters counted before the punctuation
            // and a alphabetical character is currently read.
            // a new word is starting inside the string
            if (ispunct(prev) && prev != '\'' && isalpha(ch) && letters > 0)
            {
                w_count++;
            }
            // Test if the character is a letter of the alphabet
            if (isalpha(ch))
            {
                letters++;
            }
            // save prev char to help test for punctuation
            prev = ch;
        }
        // add the letters counted in the string
        l_count += letters;
        // when at least a letter has been found in the string
        if (letters > 0)
        {
            w_count++;
        }
    }
    printf("Number of letters: %d\n", l_count);
    printf("Number of words: %d\n", w_count);
    if (w_count > 0)
    {
        printf("Letters per word: %.2f\n", (float)l_count / w_count);
    }

    return 0;
}
