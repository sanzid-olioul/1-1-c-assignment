#include<stdio.h>
int main()
{
   FILE *f;
   f=fopen("Sanzid.txt","w");
   fprintf(f ,"My name is sanzid.\n");
   fprintf(f,"I read in PUST.\n");
   fclose(f);
    f=fopen("Sanzid.txt","w+");
     fprintf(f ,"My name is sanzid Olioul Tanzid.\n");
     fclose(f);
    return 0;
}
