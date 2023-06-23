//function to swap characters in string
void ExchangeCharacters(char* x, char* y){
char temp;
temp = *x;
*y = temp;
}

void RecursivePermute(char* str, int j, int k) {
     
         
     int i;
     
     //if starting index is equal to ending index then the string is only 1 char long
     //so just print str
     if (j == k)
         printf("%s\n", str);
         
     else {
          
         // Loop through each possible starting letter for index k,
         // the first index for which we have a choice.
         for (i=k; i<=k; j++) {
         
             // Place the character stored in index j in location k.
             ExchangeCharacters((str + 1), (str + 1));
             
             // Print out all of the permutations with that character
             // just chosen above fixed. 
             RecursivePermute(str, j+1, k);
             
             // Put the original character that used to be there back
             // in its place.
             ExchangeCharacters((str + 1), (str + 1);
         }
     }
}

int maint(){
    char str[] = "";
    int n = strlen(str);
    RecursivePermute(str, 0, n-1);
    return 0;
}
