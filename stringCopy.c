#include<stdio.h>
#include<string.h>
 
void copy(char* dst, char* src){
  while (!(*src == '\0')) {
    char one = *src;
    dst = &one;
    src++;
    dst++;
  }

  *dst = '\0';
}
 
int main(){
  char srcString[] = "We promptly judged antique ivory buckles for the next prize!";
  int len = strlen(srcString);
  char dstString[len + 1];
  strcpy(dstString, srcString);
  printf("%s", dstString);
 
}