#include <stdio.h>

enum state{
  FALSE,
  TRUE
};

enum status{
  RUNNING,
  COMPLETE
};

struct flags{
  enum state title;
  enum state body;
}flag;

int main (int argc, char *argv[]){

  enum status program = RUNNING;

  for(int i = 0 ; program ; i++){
    if(argv[i][0]=="-"){

    }
  }

}

int parseFlag(char *flag[]){

  if(strcmp(flag[],'-t')){
    flag.title = TRUE;
  }else if(strcmp(flag[],'-m')){
    flag.body = FALSE;
  }

  return 0;

}
