#include<iostream>
#include<time.h>
#include<stdlib.h>
#define MAX_NUM 5

void randnum()
{
  int random;
  srand(time(0));
  for(int i = 0; i < MAX_NUM; i++)
  {
    random = rand() % MAX_NUM;
    std::cout << random << std::endl;
  }
}

int main()
{
  std::cout << "The five random number are " << std::endl;
  randnum();
}
