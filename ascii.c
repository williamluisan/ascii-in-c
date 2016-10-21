/********************************************/
/*                                          */
/*    Program   : ascii table (char only)   */
/*    Code by   : lumbalunba                */
/*    e-Mail    : williamluisan@gmail.com   */
/*                                          */
/********************************************/

#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    
    int i = 33, j, k, l, argvLength;     
    
    if (argc == 1) {
        
        printf("\nUsage : ascii codefor [character]\n");        
        
        printf("\n\t\t\t   ASCII TABLE\n");    
        printf(" ------------------------------------------------------------------ \n");
        
        // drawing the table from character ! to ~
        while (i < 52) {
            
            k = 0;
            l = 0;
            
            while (k != 5) {
                
                if ( (i+l) == 127) { printf("|          |  "); break; }
                k++;
                
                if ( (i+l) > 99) {
                    printf("|  %i = %c |  ", i+l, (char) i+l);
                } else {
                    printf("|  %i = %c  |  ", i+l, (char) i+l);
                }
                
                l += 19;
            
            }
            
            i++;
            printf("\n");
        
        }
        
        printf(" ------------------------------------------------------------------ \n");
        
        printf("\nUsage : ascii codefor [character]\n\n");
      
      // if arguments more than 3      
    } else if (argc > 3) {
    
        printf("Usage : ascii codefor [only_one_character]\n");
    
      // if just 2 arguments
    } else if ((argc == 2) && ((strcmp(argv[1], "--help") != 0) && (strcmp(argv[1], "-h") != 0))) {
    
        printf("Usage : ascii codefor [character]\n");
    
    } else {
        
        // string compare for argument[1]
        if (strcmp(argv[1], "codefor") == 0) {
           
            // calculate the argument[2] length
            argvLength = (int) strlen(argv[2]);
            
            // if argument[2] length more than 1
            if (argvLength > 1) {
            
                printf("Usage : ascii codefor [only_one_character]\n");
            
            } else {
                                
                printf("Ascii code for %s is %d\n", argv[2], (int) argv[2][0]);    
                
            }
          
          // condition for help page           
        } else if ((strcmp(argv[1], "--help") == 0) || (strcmp(argv[1], "-h") == 0)) {
        
            printf("\nWow !, finally someone try --help argument :v\n");
            printf("what are you looking from here ? \n");
            printf("\nby the way, thank you for using this program\n");
            printf("Crafted by : LumbaLunba | williamluisan@gmail.com\n");
            printf("\n");
        
        } else {
            
            printf("Usage : ascii codefor [character]\n");    
                
        }
    
    }
    
    return 0;    
    
}
