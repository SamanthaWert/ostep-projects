#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    if(argc == 1){
        printf("%s\n", "wgrep: searchterm [file ...]");
        exit(1);
    }
    else if(argc == 2){
        char search = argv[1];
        \\read from stdin
    }
    else{  \\for multiple files
        if(argv[1] == ""){        \\if search term is empty
            char buffer[1000];     \\print all lines
            while(fgets(buffer, 1000, fp)){
                printf("%s", buffer);
            }
            fclose(fp);
            exit(0);
        }
        for(int i = 3; i<argc; i++){
            FILE *fp = fopen(argv[i+1], "r");
            if (fp == NULL) {
                printf("wcat: cannot open file\n");
                exit(1);
            }
            char search[] = argv[1];
            int lensearch = sizeof(search);
            char line[] = "";
            int numchar;
            while((numchar = getline(line, 0, fp)) != -1){
                for(int j = 0; j<numchar; j++){
                    if(line[0] == search[0]){
                        for(int k = 0; k < lensearch){
                            
                        }
                    }
                    else{

                    }
                }
            }            
            fclose(fp);
        }
        exit(0);
    }

}