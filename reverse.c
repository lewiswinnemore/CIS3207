#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 999

int main(int argc, char *argv[]){

        FILE *fp = fopen(argv[1], "r");         //open file to read
        if(fp == NULL){
                printf("Something went wrong, u stupid\n");
                exit(1);
        }

        char line[SIZE];                //saves the line to char line. I cannot figure out how to get this program to read from
                                        //more than one line. I could get it to take in 'hello this is a file' and print
        fgets(line, SIZE, fp);          //'file a is this hello', but could not get it to work with  multiple lines.
        fclose(fp);
                                        //-Somehow I have broken it and now it only prints hello. Ive been looking for what I changed
                                        //and I am clueless. It's definitely a super simple issue that I just cant find.

        int tot = 0;
        char word[SIZE];
        char words[SIZE][SIZE];
        int l = 0;
        char c;
        for(int i =0; i<= strlen(line); i++){           //reverses words in file
                c = line[i];

                if(c == ' ' || c== 0){
                        strcpy(words[tot++],word);
                        memset(word, 0, SIZE);
                        l =0;
                }else{
                        l++;
                        word[l]= c;
        }
        }

        for(int i = tot-1; i>=0; i--){
                printf("%s", words[i]);         //prints string of reversed words
        }

        printf("\n");
        return 0;

}
