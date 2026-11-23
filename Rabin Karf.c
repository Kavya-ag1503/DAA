#include <stdio.h>
#include <string.h>

void rabinKarp(char text[], char pattern[])
{
    int n = strlen(text);
    int m = strlen(pattern);

    int textHash = 0;
    int patternHash = 0;

    // Calculate hash of pattern and first window
    for(int i = 0; i < m; i++)
    {
        patternHash = patternHash + pattern[i];
        textHash = textHash + text[i];
    }

    // Check every possible window
    for(int i = 0; i <= n - m; i++)
    {
        // Compare hash values
        if(textHash == patternHash)
        {
            int j;

            // Confirm by comparing characters
            for(j = 0; j < m; j++)
            {
                if(text[i + j] != pattern[j])
                    break;
            }

            if(j == m)
                printf("Pattern found at index %d\n", i);
        }

        // Calculate hash of next window
        if(i < n - m)
        {
            textHash = textHash - text[i] + text[i + m];
        }
    }
}

int main()
{
    char text[100];
    char pattern[50];

    printf("Enter text: ");
    scanf("%s", text);

    printf("Enter pattern: ");
    scanf("%s", pattern);

    rabinKarp(text, pattern);

    return 0;
}
