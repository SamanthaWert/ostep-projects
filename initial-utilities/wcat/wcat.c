#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    if(argc == 0){
        printf("wcat: cannot open file\n");
        exit(0);
    }
    for(int i=0; i<argc; i++){
        FILE *fp = fopen(argv[i+1], "r");
        if (fp == NULL) {
            printf("wcat: cannot open file\n");
            exit(1);
        }
        char buffer[1000];
        while(fgets(buffer, 1000, fp)){
            printf("%s", buffer);
        }
        fclose(fp);
    }
    exit(0);
}