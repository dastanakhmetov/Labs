#include <stdio.h>
#include <math.h>
#include <unistd.h>
#include <getopt.h>
#include <stdlib.h>

int main(int args,char **argv)
{
  
  char option;
  while((option = getopt(args,argv,"kr"))!=-1)
  {
    switch(option)
    {
      case 'k':
	   printf("Salem \n");
           break;
      case 'r':
	   printf("Zdarova \n");
           break;
      default:
           printf("Hello");
           break;
    }
  }

}
