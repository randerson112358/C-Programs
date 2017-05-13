/**
* This program (initials.c), prints the initials of someones full name in all capitals
*/

//Initializing the APIs/ Libraries
# include <stdio.h> //has fgets(), printf()
# include <string.h>// has strlen()
# include <ctype.h> // has toupper()


//Declare function
void getInitials(char* name);

int main(void){
    
    //Declare a string for a users name assuming the name doesn't exceed 31 characters
    char name[31];
    
    //Ask the user for their name
    printf("Please enter your name:\n");
    
    //Get the users input (his or her name)
    fgets(name, sizeof(name), stdin);;
    
    printf("Your initials are: ");
    //Prints the initials
    getInitials(name);
       
}

void getInitials(char* name){
     
     int i=0;
     
     // If the string length is greater than 0 then there is at least 1 character at index[0]
     if(strlen(name) > 0)
       printf("%c", toupper(name[0]));
     
     //While the current character in name does not equal the last character in name denoted by '\0' , 
     // go through each character of the string
     while(name[i] != '\0')
     {
                   //If the character is a space, then print the next character
                   if(isspace(name[i]) && (i+1 < strlen(name)))
                   {
                                       //Loops through all of the spaces for human input error
                                       while(isspace(name[i])&& (i+1 < strlen(name)))
                                       {
                                             i++ ;             
                                       }
                                       printf("%c", toupper(name[i]));
                   }
                   
                   i++;//increment i by one
     }
     printf("\n");//prints a new line
}
