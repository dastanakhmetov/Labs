#include <stdio.h>
#include <math.h>
#include <unistd.h>
#include <getopt.h>
#include <stdlib.h>


void print_cosine(float c)
{ 
  float cosine;
  cosine = cos(c);
  printf("Cosine values is:%f \n",cosine);	
}
void print_sine(float s)
{ 
  float sine;
  sine = sin(s);
  printf("Sine values is:%f \n",sine);	
}

int main (int args,char **argv)
{
  char option;
  double a;
  float f;
  
  while((option=getopt(args,argv,"c:s:"))!=-1)
  {
    switch(option)
    {
      case 'c':
	       print_cosine(atof(optarg));
               break;    
      case 's':
	       print_sine(atof(optarg));
               break;    
    }
  }

}

