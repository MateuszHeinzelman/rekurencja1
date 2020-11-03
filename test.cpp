#include <stdio.h>
  
int two ( nx ){
  int result;
  if (nx == 0 ){  return 1; }
  
  int rest = two ( nx - 1 );

  result = nx * rest;
  return result;
}


int main(void) {
int silnia; 

silnia = two ( 4 );

  printf ( "%d" , silnia );
  return 0;
}
