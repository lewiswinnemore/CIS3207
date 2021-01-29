#include <stdio.h>
#include <stdlib.h>
#define SIZE 999

int main(int argc, char *argv){

        char buf[SIZE];
        char mah[SIZE];

        printf("enter search term");
        scanf("%s", mah);
       
        for(int i = 0; i<SIZE; i++){
        FILE *fp = fopen("wgrep.c", "r");        //copied from lab pdf
        if(fp == NULL){
                printf("it didnt work idiot\n");
                exit(1);

        }

        

while(fgets(buf, SIZE, fp) != NULL){
        int f++;
        if(mah == fp){
         int count++; 
                printf("one time");
        }
       
}

        printf("\n");
        fclose(fp);
}




}
