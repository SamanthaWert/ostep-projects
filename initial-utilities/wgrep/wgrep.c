#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    if(argc == 1){
        printf("%s\n", "wgrep: searchterm [file ...]");
        exit(0);
    }
    else if(argc == 2){

    }
    else if(argc == 3){
        FILE *fp = fopen(argv[i+1], "r");
        if (fp == NULL) {
            printf("wcat: cannot open file\n");
            exit(1);
        }


    }

}
