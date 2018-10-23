#include "funkcje.c"

 const int el_size;
 const int tstack_size;
 int i;
 
 tstack *init(void);

 void close(tstack *s);

 int isempty(tstack *s);

 int push(tstack *s, int el);

 int pop(tstack *s);
