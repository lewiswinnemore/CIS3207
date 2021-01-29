#include <stdio.h>
#include <stdlib.h>
#define SIZE 999

int main(int argc, char *argv){

        char buf[SIZE];

        printf("enter search term");
        scanf("%s", mah);
       
        for(int i = 0; i<SIZE; i++){
        FILE *fp = fopen("wgrep.c", "r");        //copied from lab pdf
        if(fp == NULL){
                printf("cannot open file\n");
                exit(1);

        }

        //char get = *fgets(buffer, SIZE, fp);

while(fgets(buf, SIZE, fp) != NULL){
        int f++;

       
}

        printf("\n");
        fclose(fp);
}




}
