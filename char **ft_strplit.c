#include <unistd.h>
#include <stdlib.h>
 
int isdwrd (char *s, char c);
int lnglen (char *s, char c);
char **ft_strsplit (char *s, char c);
 
 
int main() {
ft_strsplit ("///my //coding/ sample!!//", '/');
 return 0;
}
 
char **ft_strsplit (char *s, char c)
{
 int i = 0, j= 0, k = 0;
 int e = isdwrd(s,c);
 int f = lnglen(s,c);
char **split;

 // allocate space for 2D Array if allocation fails return NULL.
  split = (char **)malloc (e * sizeof(char *));
  if (split == NULL)
  return (0);
  while (k < e)
 {
   split [k] = (char *) malloc (f * sizeof(char));
    if (split == NULL)
    return (0);
   k++;
 }

// skip past delimiters, while not a delimiter copy character until del is reached,repeat until the last array which is reserved for terminating 2d array. 
  while (*s)
 {
   if (*s == c)
   s++;
     while (*s != c && i < (e-1))
     {
       split[i][j] = *s;
       s++;
       j++;
       if (*(s + 1) == c)
       {
         split[i][j] = *s;
         s++;
         j++;
         split[i][j] = '\0';
         
         j = 0;
         i++;
       }
     }
   }
   split[i][j] = '\0';
    return (split);
}
 
// counts the number of delimited words.
int isdwrd (char *s, char c)
{
 int i = 0;
// if string is a delimiter followed by a non delimiter increase word counter.
while (*s)
 {
   if ((*s == c) && (*(s+1) != c))
   {
   i++;
   s++;
   }else
   s++;
 }
  return (i);
}
 
//counts the longest possible word length by counting all chars != delimiter
int lnglen (char *s, char c)
{
 int i = 0;
  while (*s)
 {
   if (*s != c)
   {
     i++;
     s++;
   } else
   s++;
 }
 return (i);
}
