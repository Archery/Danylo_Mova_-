#include <stdio.h>
#include <stdlib.h>

/*
import sys
print("ПЕРЕВЕДЕННЯ ЧиСЕЛ")
o = int(input("ВВЕДІТЬ О = ? ")) 
bazza = int(input("ВВедіть БАЗУ = ? "))
if (bazza > 10):
  print("база більше 10")
  sys.exit()
  
s = ""

while o > 0:
    s = str(o % bazza) + s
    o = o // bazza
print(s)
*/

int main(void) { //початок програми
    int o=24, bazza=3;
    char* s;
    if (bazza > 10){
      printf("bazza > 10");
      return -1; 
    }
    while (o>0) {
        int x = -42;
        int length = snprintf( NULL, 0, "%d", x );
        char* str = malloc( length + 1 );
        snprintf( str, length + 1, "%d", x );



        s = (o% bazza)+s;
        o=o/bazza;
    }
    printf("%s",s);
}

int x = -42;
int length = snprintf( NULL, 0, "%d", x );
char* str = malloc( length + 1 );
snprintf( str, length + 1, "%d", x );
...
free(str);
    
    