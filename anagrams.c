#include<stdio.h>
#include<string.h>
int main() {

  int counter1[4] = {0,0,0,0};
  int counter2[4] = {0,0,0,0};

  char s1[] = "dbb cccccaacb cdbababdcdcdab dcdad";
  char s2[] = "bbbcc bdddccccad cdbbaaacaccdabdd";

  for (int i=0; i < strlen(s1); i++) {
    switch (s1[i]) {
      case 'a':
        counter1[0] += 1;
      case 'b':
        counter1[1] += 1;
      case 'c':
        counter1[2] += 1;
      case 'd':
        counter1[3] += 1;
    }
  }
  
  for (int i=0; i < strlen(s2); i++) {
    switch (s2[i]) {
      case 'a':
        counter2[0] += 1;
      case 'b':
        counter2[1] += 1;
      case 'c':
        counter2[2] += 1;
      case 'd':
        counter2[3] += 1;
    }
  }

  int flag = 0;
  for (int i=0; i <= 3 ; i++) {
    printf("%i\n", counter1[i]);
    printf("%i\n", counter2[i]);
    printf("%i\n", flag);
    if (counter1[i] != counter2[i]) {flag = 1;}
  }

  if (flag == 1) {
    printf("Not Anagram!");
  } else { printf("Anagram!");}


}
