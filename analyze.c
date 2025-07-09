#include <stdio.h>
#include <stdlib.h>

typedef struct StatData {
long id;
int
count;
float cost;
unsigned int primary:1;
unsigned int mode:3;
} StatData;



int StoreDump();
int LoadDump();
int JoinDump();
int SortDump();


int main(int argc, char** argv){
    if (argc < 4)
    {
        fprintf(stderr, "Not enough parameters\n");
        exit(1);
    }
    printf("Hello, from analyze!\n");
    for (int i=0;i<argc;i++)
    {
        printf("param %d = %s\n", i, argv[i]);
    }
    ;
}
