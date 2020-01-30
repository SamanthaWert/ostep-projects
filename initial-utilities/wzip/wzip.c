#include <stdio.h>
#include <stdlib.h>

int counter(const char* line, char c)

    int main(int argc, char *argv[]){
    int counter[26]; //where fwrite will read from
    size_t items = 0; //number of items of data
    size_t size = 5; //four byte binary and char

    for(int i=0; i<(argc-1); i++){
        FILE *fb = fopen(argv[i+1], "r");
        ssize_t numchar;
        char *line = NULL;
        size_t length = 0;
        while((numchar = getline(&line, &length, fb)) != -1){
            counter[0] = counter[0] + counter(line, "a");
            counter[1] = counter[1] + counter(line, "b");
            counter[2] = counter[2] + counter(line, "c");
            counter[3] = counter[3] + counter(line, "d");
            counter[4] = counter[4] + counter(line, "e");
            counter[5] = counter[5] + counter(line, "f");
            counter[6] = counter[6] + counter(line, "g");
            counter[7] = counter[7] + counter(line, "h");
            counter[8] = counter[8] + counter(line, "i");
            counter[9] = counter[9] + counter(line, "j");
            counter[10] = counter[10] + counter(line, "k");
            counter[11] = counter[11] + counter(line, "l");
            counter[12] = counter[12] + counter(line, "m");
            counter[13] = counter[13] + counter(line, "n");
            counter[14] = counter[14] + counter(line, "o");
            counter[15] = counter[15] + counter(line, "p");
            counter[16] = counter[16] + counter(line, "q");
            counter[17] = counter[17] + counter(line, "r");
            counter[18] = counter[18] + counter(line, "s");
            counter[19] = counter[19] + counter(line, "t");
            counter[20] = counter[20] + counter(line, "u");
            counter[21] = counter[21] + counter(line, "v");
            counter[22] = counter[22] + counter(line, "w");
            counter[23] = counter[23] + counter(line, "x");
            counter[24] = counter[24] + counter(line, "y");
            counter[25] = counter[25] + counter(line, "z");
        }
    }
            counter[0] = counter[0] + "a";
            counter[1] = counter[1] + "b";
            counter[2] = counter[2] + "c";
            counter[3] = counter[3] + "d";
            counter[4] = counter[4] + "e";
            counter[5] = counter[5] + "f";
            counter[6] = counter[6] + "g";
            counter[7] = counter[7] + "h";
            counter[8] = counter[8] + "i";
            counter[9] = counter[9] + "j";
            counter[10] = counter[10] + "k";
            counter[11] = counter[11] + "l";
            counter[12] = counter[12] + "m";
            counter[13] = counter[13] + "n";
            counter[14] = counter[14] + "o";
            counter[15] = counter[15] + "p";
            counter[16] = counter[16] + "q";
            counter[17] = counter[17] + "r";
            counter[18] = counter[18] + "s";
            counter[19] = counter[19] + "t";
            counter[20] = counter[20] + "u";
            counter[21] = counter[21] + "v";
            counter[22] = counter[22] + "w";
            counter[23] = counter[23] + "x";
            counter[24] = counter[24] + "y";
            counter[25] = counter[25] + "z";    
    FILE *fp = fopen(argv[2], "w");
    fwrite(counter, size, items, fp);
}

int counter(const char* line, char c){
    int times = 0;
    int linelen = strlen(line);
    for(int i=0; i<linelen; i++){
        if(line[i] == c){
            count = count+1;
        }
    }
    return count;
}
