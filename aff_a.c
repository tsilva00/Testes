#include <unistd.h>
#include<stdio.h>

//to check if the letter is "a"
void  check(char *str)
{
  int i;

  i = 0;
  while(str[i] != '\0')
  {
    if(str[i] == 'a')
    {
      write(1, &"a", 1);
      break;
    }
    i++;
  }
  write(1, &"\n", 1);
}

int main(int argc, char **argv)
{
  if(argc >= 1)
  {
    check(argv[1]);
  }
  return 0;
}
