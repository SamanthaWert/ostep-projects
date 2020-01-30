#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int counts(char *line, char c);

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
            counter[0] = counter[0] + counts(line, "a");
            counter[1] = counter[1] + counts(line, "b");
            counter[2] = counter[2] + counts(line, "c");
            counter[3] = counter[3] + counts(line, "d");
            counter[4] = counter[4] + counts(line, "e");
            counter[5] = counter[5] + counts(line, "f");
            counter[6] = counter[6] + counts(line, "g");
            counter[7] = counter[7] + counts(line, "h");
            counter[8] = counter[8] + counts(line, "i");
            counter[9] = counter[9] + counts(line, "j");
            counter[10] = counter[10] + counts(line, "k");
            counter[11] = counter[11] + counts(line, "l");
            counter[12] = counter[12] + counts(line, "m");
            counter[13] = counter[13] + counts(line, "n");
            counter[14] = counter[14] + counts(line, "o");
            counter[15] = counter[15] + counts(line, "p");
            counter[16] = counter[16] + counts(line, "q");
            counter[17] = counter[17] + counts(line, "r");
            counter[18] = counter[18] + counts(line, "s");
            counter[19] = counter[19] + counts(line, "t");
            counter[20] = counter[20] + counts(line, "u");
            counter[21] = counter[21] + counts(line, "v");
            counter[22] = counter[22] + counts(line, "w");
            counter[23] = counter[23] + counts(line, "x");
            counter[24] = counter[24] + counts(line, "y");
            counter[25] = counter[25] + counts(line, "z");
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

int counts(char *line, char c){
    int times = 0;
    int linelen = strlen(line);
    for(int i=0; i<linelen; i++){
        if(line[i] == c){
            times = times + 1;
        }
    }
    return times;
}
