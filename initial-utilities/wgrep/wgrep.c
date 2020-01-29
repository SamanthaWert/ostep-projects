#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]){
    if(argc == 1){
        printf("%s\n", "wgrep: searchterm [file ...]");
        exit(1);
    }
    else if(argc == 2){
        char *str;
        scanf("%s", str);
        char *search = argv[1];
        char *line;
        int numchar;
        char *found = strstr(line, search);
        if(found != NULL){
            printf("%p", line);
        }
    }
    else{
        if(argv[1] == ""){     
            for(int i=3; i<argc; i++){
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
        for(int i = 3; i<argc; i++){
            FILE *fp = fopen(argv[i+1], "r");
            if (fp == NULL) {
                printf("wcat: cannot open file\n");
                exit(1);
            }
            char *search = argv[1];
            char *line;
            ssize_t numchar;
            size_t length = 0;
            while((numchar = getline(&line, &len, fp)) != -1){
                char *found;
                found = strstr(line, search);
                if(found != NULL){
                    printf("%p", line);
                }
            }            
            fclose(fp);
        }
        exit(0);
    }
}
