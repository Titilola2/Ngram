#include <stdio.h>
#include <string.h>
#include "my_ngram.h"


int main(int argc, char *argv[]){

    char unique[50] = {};
    int number_of_occurrence[50] = {};
    char sorted_unique[50];
    int sorted_occurrence[50];
    
    int n = argc;
    for(int i = 1; i < n; i++){
        add_unique(unique, argv[i]);
    }
    ;
    int length = strlen(unique);
    for(int i = 0; i < length; i++){
       
        int count = 0;
        for(int k = 1; k < n; k ++)
        {
            int j = 0;
            while(argv[k][j] != '\0')
            {
                if(argv[k][j] == unique[i])
                {
                    count++;
                }
                j++;
            }
        }
       
       number_of_occurrence[i] = count;
    }
    sort_unique(unique, number_of_occurrence, sorted_unique, sorted_occurrence);
    int num = strlen(unique);
    
    for(int i = 0; i < num; i++ ){
       printf("%c:%i\n", sorted_unique[i], sorted_occurrence[i]);
    }
    return 0;
}
