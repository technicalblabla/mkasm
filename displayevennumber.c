#include <stdio.h>  
   
int main() {  
    int c; 
    printf("The even numbers are");  
   
    for(c = 1; c <= 100; c++) {  
       
        if(counter%2 == 0) { 
           
            printf("%d ", c);  
        }  
    }  
   
    return 0;  
} 
