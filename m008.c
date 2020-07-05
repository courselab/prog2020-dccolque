/* m008.c - Lastname-Names.
   This program reads the name of a person from the standard input
   in the form 'First-name middle-names last-name' and outputs the 
   name in the form 'LAST-NAME, first-name middle-names'.
   The name should be entered using only ASCII characters (26 letter 
   of latim alphabet, no diacrictics).
   E.g.
      command line    : m008
      standard input  : John Little Bill Doe 
      expected output : DOE, John Little Bill
   Directions:
      Please, edit function lasname();
      do no not change function main().
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 256

/* Converts the string 's' from first-middle-last name 
   form into LAST-first-middle form. */

void lastname (char *s)
{
  char t[MAX];
  int a=0, x, b=0;
  int j;

  strcpy (t ,s);

  for(a=0; t[a] != 0; a++){
    if(t[a]==' ' || t[a]==' '){
      x=a;
    }
  }
  
  s[0]=t[x+1];
  
  for(a=x+1; t[a] != 0; a++){
    if(s[a]>='a' && s[a]<='z'){
      s[b]=s[a]-32;
      b++;
    }
  }
  
  s[b]=',';
  b =b+1;
  s[b] = ' ';
  b= b+1;

while(x>0){
  s[b]=t[j];
  b++;
  j++;
  x--;
}
}



/* Do not edit this function. */

int main (int argc, char **argv)
{
  int n;
  char name[MAX];

  fgets (name, MAX-1, stdin);
  
  lastname (name);

  printf ("%s\n", name);
  
  return 0;
}