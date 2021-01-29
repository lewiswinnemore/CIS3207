#include <stdio.h>
#include <stdlib.h>
#define SIZE 999

int main(int argc, char *argv[]){

        char buffer[SIZE];

        for(int i = 0; i < argc; i++){

        FILE *fp = fopen("wcat.c", "r");        //copied from lab pdf
        if(fp == NULL){
                printf("cannot open file\n");
                exit(1);

        }

        //char get = *fgets(buffer, SIZE, fp);
        while(fgets(buffer, SIZE, fp) != NULL){
        printf("%s", buffer);

}

        printf("\n");
        fclose(fp);
}
return 0;

}

