#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <cs50.h>

int main(int argc, string argv[])
{

string key = argv[1];
// check no. or arguments given make sure there is only 1
    if (argc != 2) 
    {
        printf("Usage: ./caesar k\n");

        return 1;
    }
    else  
    {
       for (int i=0, n = strlen(key); i<n; i++)
       {
           if isalpha(key[i])
           {
               
           }
           else
           {
               printf("Bhogchod\n");
               return 1;
           }
       }
    }


   
    int k = atoi(key); // get the ceasar KEY value convert into integar

    string s = get_string("plaintext: "); // get text
    
    int j=0;

           
    printf("ciphertext: "); // print out cipher

// iterate through plain text letter by letter
    for (int i = 0, n = strlen(s) ; i < n; i++)
    {
        j = j % strlen(key);
        // checking if it is lowercase 97 = a to 112 = z and if it + 13 characters along.
        if (isupper(key[j]))
            { 
            //printf(" key no is %d\n",j);
            //printf("first letter of key is %c\n",key[j]);
            if (s[i] >= 'a' && s[i] <= 'z')
                {
                    printf("%c", (((s[i] - 'a') + (key[j]-'A')) % 26) + 'a'); // print out lowercase with key
                } // if it it between uppercase A and C
                else if (s[i] >= 'A' && s[i] <= 'Z')
                {
                    printf("%c", (((s[i] - 'A') + (key[j]-'A')) % 26) + 'A'); // print out uppercase with key
                }
            j++;

              
            }
       
         else if (islower(key[j]))
             {
                               if (s[i] >= 'a' && s[i] <= 'z')
                    {
                        printf("%c", (((s[i] - 'a') + (key[j]-'a')) % 26) + 'a'); // print out lowercase with key
                    } // if it it between uppercase A and C
                    else if (s[i] >= 'A' && s[i] <= 'Z')
                    {
                        printf("%c", (((s[i] - 'A') + (key[j]-'a')) % 26) + 'A'); // print out uppercase with key
                    }
             j++;

                  
               }
          else

                {
                    printf("%c", s[i]);
                }
        } 

    printf("\n");
    return 0;
}
