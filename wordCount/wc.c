#include <stdio.h>

/*count digits, white space, others */
int main(){
  int c, i, nwhite, nother, ndigit[10], wdigit[10];

  for (nwhite = nother = i = 0; i < 10; ++i){
    ndigit[i] = 0;
    wdigit[i] = i;}

  while ((c = getchar()) != EOF)
    if (c >= '0' && c <= '9')
      ++ndigit[c-'0'];
    else if (c == ' ' || c == '\n' || c == '\t')
      ++nwhite;
    else
        ++nother;

  printf("\nwhite space = %d\nother = %d\n", nwhite, nother);
  for (i = 0; i < 10; ++i)
    printf("%d = %d\n", wdigit[i], ndigit[i]);
  return 0;
}
