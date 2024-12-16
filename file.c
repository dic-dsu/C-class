#include <stdio.h>

int main(){
    FILE *myfile, *file;
    myfile = fopen("testfile.txt", "a");
    fprintf(myfile, "This is the test file\n");
    fclose(myfile);

    file = fopen("testfile.txt", "r");
    char file_data[1000];
    while(fgets(file_data, 1000, file))printf("%s", file_data);
    fclose(file);
}