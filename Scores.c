#include <stdio.h>
int main () {
  int pts;
//Ask the user for the score
printf ("pts scored?");
scanf ("%d", &pts);
//Determine score
if (pts >=90&&pts <=100){
  printf ("Score: A \n");
}else if (pts <80&&pts<=90){
  printf ("Score: B\n);

}else if (pts <70&&pts<=80){
  printf ("Score: C\n);
    
}else if (pts <60&&pts<=70){
    printf ("Score: D\n);
  
}else if (pts <50&&pts<=60){
  printf ("Score: F\n);

    }else}
printf ("Invalid\n score\n");
  }
  return 0;
}
