#ifndef HEADER_FILE
#define HEADER_FILE
/*A funtion that adds unique char of a string to an empty char array.
* and determine the number of times they occur.
* it takes an empty char array (@ char uni)
* and a string (@ char *str) as parameters
*/
void add_unique(char uni[], char *str)
{
    if(uni[0] == '\0')
    {
        uni[0] = str[0];
    }

    for(int i = 0; str[i] != '\0'; i++)
    {
        int j = 0;
        int k = 0;
        while(uni[j] != '\0')
        {
            if(uni[j] == str[i])
            {
                k++;
            }
            j++;
        }
        if(k == 0)
        {
            int len = strlen(uni);
            uni[len] = str[i];
        }
        else{
            k = 0;
        }
    }
}

/*A funtion that sorts the content of char array in alphanumeric order
* it takes an empty char array (char sorted_unique[]), an empty (int sorted_occurrence[]) 
* and array of unique character 
*/
void sort_unique(char uni[], int number_of_occurrence[], char sorted_unique[], int sorted_occurrence[])
{
    int n = strlen(uni);
  
    for(int i = 0; i < n; i++){
      int count = 0;
      
        for(int j = 0; j < n; j++){
            if(uni[i] > uni[j]){
                count++;
            }
        }
        sorted_unique[count] = uni[i];
        sorted_occurrence[count] = number_of_occurrence[i];
    }
}
#endif
