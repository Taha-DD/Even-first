#include<stdio.h>

const int size = 7;

void solo ( int T[], int v[])
{
  int o = 0;
  
  for ( int i = 0; i < size; i++)
    if ( T[i] % 2 == 0 )
    {
      v[o] = T[i];
      o++;
    }
    
  for ( int j = 0; j < size; j++)
    if ( T[j] % 2 )
    {
      v[o] = T[j];
      o++;
    }
}

int main ()
{
  int T[size], v[size];
  puts (" Enter the 7 elements of the vector V:");
  
  for ( int i = 0; i < size; i++ )
  {
    printf (" V[%d]= ", i);
    scanf ("%d", &T[i]);
  }
  
  solo ( T, v );
  
  printf ("\n The new vector is: [ ");
  
  for ( int i = 0; i < size; i++ )
    printf("%d ", i[v]);
  
  puts ("]");
  
  return 0;
}
