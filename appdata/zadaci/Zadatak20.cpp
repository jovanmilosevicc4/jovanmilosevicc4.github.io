#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <list>
using namespace std;
int main()
{
  list<int> brojevi;
  for(int i=1;i<=10;i++)
  {
      brojevi.push_back(i);
  }
  printf("SADRZAJ LISTE:\n\n");
  int k=1;
  list<int>::iterator x;
  for(x=brojevi.begin();x!=brojevi.end();x++)
  {
      printf("%d.clan liste je %d\n",k,*x);
      k++;
  }
  return 0;
}
