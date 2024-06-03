#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <unistd.h>

#define width 50
#define height 25
#define love 42
#define heart 80

int main() {
    while (love) {
    for(int i = 0; i < height; i++) {
      for(int j = 0; j < width; j++) {

        int x = j / 2 - width / 4;
        int y = height / 2 - i;
        int r = 'a' + rand() % 26; 
        int happiness = x * x + (int)((y - sqrt(abs(x))) * (y - abs(x)));

          if (happiness <= heart)
          {
             char ran = rand() % 7 + '0';
             printf("\033[01;3%cm%c", ran, r);
          }
          else
          {
            printf("\033[01;30m.");
          }
          }      
     
        printf("\n");
        sleep(1);
      }
    }
}