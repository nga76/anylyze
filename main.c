#include <stdio.h>

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
    printf("Hello, from analyze!\n");
}
