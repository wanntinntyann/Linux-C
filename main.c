#include <stdio.h>
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
  cout<< "argc=" << argc <<endl;

  for(int i = 0; i < argc; i++){ 
	printf("argv[%d]=%s\n", i, argv[i]);
  }

  return 0;
}
