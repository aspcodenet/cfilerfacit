#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

void oddRows(){
    FILE *f=fopen("namn.txt", "r");
    if(f == NULL){
        printf("FEL!!! - Filen kunde inte öppnas");
        return;
    }
    char line[250];
    bool odd = true;
    while(fgets(line,250,f)){
        line[strcspn(line, "\r\n")] = 0;
        if(odd) printf("%s\n",line);
        odd = !odd;
    }

    fclose(f);
}


void main(){
    oddRows();
}




