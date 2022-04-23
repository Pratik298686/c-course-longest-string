#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char** argv)
{
    int i, maxindex = 0;
   size_t len, maxilen = 0,len2,maxilen2 = 0;
   if(argc==1){
       puts(argv[argc]);
       return EXIT_FAILURE;
   }
    
    for ( i = 1; i < argc; i++) {
        len = strlen(argv[i]);
        if(len>maxilen){
            maxilen = len;
            maxindex = i;
        }
    }

    for ( i = 1; i < argc; i++) {
        len2 = strlen(argv[i]);
        if(strlen(argv[i]) == strlen(argv[maxindex])){
           len2 =strlen(argv[i]);
           maxilen2 = i;
           printf("\n The longest string and their index: '%s' %d\n",argv[maxilen2],maxilen2);
           break;
        }
    }
    return EXIT_SUCCESS;
}