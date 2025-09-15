#include <ctype.h>
#include <stdio.h>
#include <string.h>

void capitalize_substring(char *str, char *substr) {
   int i =0, found =1,k=0;
   while(i < strlen(str)){
     if(str[i] == substr[0]){
       found = 1;
       for(k=0;k < strlen(substr);k++){
         if(str[i+k] != substr[k]){
           found =0;
           break;
         }
       }

       if(found){
         for(k=0;k < strlen(substr);k++){
             if(str[i + k] != ' ' && (str[i + k] >= 'a' && str[i + k] <= 'z'))
			    str[i + k] -= 32;
         }
         i += strlen(substr);
       }else{
         i++;
       }
     }else{
        i++;
     }
   }
}
