

//only initials conversion 


#include <stdio.h>
int firstupper(char str[], int n) {
   int i;
   for(i = 0; i<n; i++) {
      if (i == 0 && str[i] != ' ' || str[i] != ' ' && str[i-1] == ' ') {
         if(str[i] >= 'a' && str[i]<='z') {
            str[i] = (char)(('A'-'a') + str[i] );
         }
      } else if (str[i] >= 'A' && str[i] <= 'Z') {
         str[i] = (char)(str[i] + ('a' - 'A'));
      }
   }
   return 0;
}
int main(int argc, char const *argv[]) {
   char str[] = {"sUNIDHi bAnSAL"};
   int n = sizeof(str)/sizeof(str[0]);
   firstupper(str, n);
   printf("%s\n", str);
   return 0;
}

