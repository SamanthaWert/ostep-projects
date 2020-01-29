#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    if(argc == 1){
        printf("%s\n", "wgrep: searchterm [file ...]");
        exit(1);
    }
    else if(argc == 2){
        char term = argv[1];
        char search[sizeof(term)] = term;
        
        int lensearch = sizeof(search);
        char str[1];
        scanf("%s", str);
        for(int j = 0; j<sizeof(str); j++){
            if(str[j] == search[0]){
                int k=0;
                while(k<lensearch){
                    if(str[j+k] != search[k]){
                        break;
                    }
                    if(k == lensearch-1){
                        printf("%s", str);
                    }
                    k++;
                }
            }
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
            char search[] = argv[1];
            int lensearch = sizeof(search);
            char *line[] = "";
            int numchar;
            while((numchar = getline(line, 0, fp)) != -1){
                for(int j = 0; j<numchar; j++){
                    if(line[j] == search[0]){
                        int k=0;
                        while(k<lensearch){
                            if(line[j+k] != search[k]){
                                break;
                            }
                            if(k == lensearch-1){
                                printf("%s", line);
                            }
                            k++;
                        }
                    }
                }
            }            
            fclose(fp);
        }
        exit(0);
    }
}
