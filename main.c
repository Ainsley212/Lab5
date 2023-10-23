#include <stdio.h>
#include <string.h>

int main()
{
    char input[256]; 
    int letterCount[26] = {0}; 
    int i;

    printf("Enter text strings (press Enter on an empty line to exit):\n");

    while (1)
    {
        fgets(input, sizeof(input), stdin); 

        if (strlen(input) == 1 && input[0] == '\n')
        {
            break;
        }

       for (i = 0; input[i] != '\0'; i++) {
         letterCount[input[i] - 'a'] += 1;
       }

       for (i = 0; input[i] != '\0'; i++) {
          letterCount[input[i] - 'A'] += 1;
       }

      printf("Distrubution of letters in the input: \n");
      for (i = 0; i < 26; i++){
        

          char letter = 'A'+i;
          printf("%c: %d ",letter, letterCount[i]);
        
      }

    }
    return 0;
}