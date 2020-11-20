#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void newlang(char source[],char destination[]){    
    //open the files to use further in the prorgam.
    FILE *wrd1 = fopen("newLang.mex","a+");
    FILE *wrd2 = fopen("destino.c","a+");
    int i = 1;
    int CountLine = 0;
    //int line_c = 0;
    char* store[100]= wrd1;
    if (!wrd1 && !wrd2){
        printf("File not able to open, pls retry");
        return;
    }
    char path[100];   
    fprintf(wrd2, "\n");
//This will write
    while(!feof(wrd1)) {
        fgets(path, sizeof(path), wrd1);
        fprintf(wrd2, "%s", path);
    }
    rewind(wrd2);    
    //This part of the program is supposed to replace the string, yet the way my text file is saved is not able to be  used. And it does
    //not want to recognize the text which is gonna replace my source code as a mere text.   
    for(int i =1,CountLine < i;i++){    
        if(strcmp(store[100],"   /paste/") ==0){
        store[100] = "printf(This is an example of replacing source code);";
        }    
    }
//This will print in the outfile
    while (!feof(wrd2)){
        fgets(path, sizeof(path),wrd2);
        printf("%s", path);
    }
}
    int main(){
        char source[] = "newLang.mex", destino[]="destino.c";
        newlang(source, destino);

        return 0;
    }

    
