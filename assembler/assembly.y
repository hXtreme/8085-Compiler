/**
 * Copyright 2018 Harsh Parekh.
 * Licensed under GPLv3.
 */

%{
  #include <stdio.h>
  #include "y.tab.h"
  #include "assembler.h"
  void yywrap(void){
    return 1;
  }
%}

%union{
  Cell *p;
  int i;
}

%token <i> FIRSTTOKKEN


%%

program:
          program operation '\n'
        | error

%%

void yyerror(char *s){
  fprintf(stderr, "%s\n", s);
}