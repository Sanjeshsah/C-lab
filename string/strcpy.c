#include<stdio.h>
int main(){
  char a[50], b[50];
  int i;
  printf("Enter a string:");
  scanf("%s", a);

  for (i=0;a[i]!='\0';i++) {
    b[i] = a[i];
  }
  printf("The copied string is: %s\n", b);
  return 0;
}
