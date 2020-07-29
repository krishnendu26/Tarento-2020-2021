"""Read an array of words as user input (do not hardcode input) and print all 2 word combinations possible without any duplications. Ex: Input [one, two, three ] Output: [one-two, one-three, two-one, two-three, three-one, three-two]"""
#include <stdio.h>
#include <string.h>

int main()
{
//Declare Variables
char string[10][30]; //2D array for storing strings
int i, n,j,k;

//Get the maximum number of strings
printf("Enter number of strings to input\n");
scanf("%d", &n);

//Read the string from user
printf("Enter Strings one by one: \n");
for(i=0; i< n ; i++) {
scanf("%s",string[i]);
}

    for(j=0; j< n ; j++) {
        for(k=0; k< n ; k++) {
            if(j!=k)
            {
            printf("\n %s - %s", string[j],string[k]);
            }
        }
    }
//Print the length of each string

//Return to the system
return 0;
}
