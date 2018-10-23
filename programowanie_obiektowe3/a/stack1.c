#include <stdlib.h>
#include <stdio.h>

struct stack
{
	int *stack;
	int stack_index;
	int stack_size;
};

typedef struct stack tstack;

const int el_size = sizeof(int);
const int tstack_size = sizeof(tstack);

tstack *init(void)
{
	tstack *s = (tstack*) malloc(tstack_size);

	if(s)	/*If allocation was not successfull - NULL will be returned*/
	{
		s->stack = NULL;
		s->stack_index = 0;
		s->stack_size = 0;
    	};

	return s;
}

void close(tstack *s)
{
	if(s)	/*If NULL - no operation*/
	{
		free(s->stack);
		free(s);
	};
}

int isempty(tstack *s)
{
    if(!s)
    {
	printf("Error in isempty(): stack used before initialization\n");
	abort();	/*Critical error in program code (pointer should be tested before usage)*/
    };

    /*return s->stack_index==0 ? true : false;*/
    return (s->stack_index==0);
}

int push(tstack *s, int el)
{
	int *new_stack;

    if(!s)
    {
	printf("Error in push(): stack used before initialization\n");
	abort();	/*Critical error in program code (pointer should be tested before usage)*/
    };

    if(s->stack_index==s->stack_size)
    {
	s->stack_size = s->stack_size==0 ? 1 : s->stack_size* 2;
	new_stack = (int*) realloc(s->stack,s->stack_size*el_size);
	if(!new_stack)
	{
		printf("Error in push(): unsuccessful memory reallocation\n");
		return 0;	/*Run-time error (e.g.: out of memory)*/
	};

	s->stack = new_stack;
    };

    s->stack[s->stack_index++] = el;

    return s->stack_index;
}

int pop(tstack *s)
{
	if(!s)
	{
		printf("Error in pop(): stack used before initialization\n");
		abort();	/*Critical error in program code (pointer should be tested before usage)*/
	};

	if(s->stack_index > 0)
		return s->stack[--(s->stack_index)];

	printf("Error in pop(): stack is empty\n");
	abort();		/*Not critical error - function pop() could be used to test*/
				/*if stack is empty - but there is no good value to return*/
}

int main(void)
{
 	tstack *s1=NULL;

	s1 = init();

	int i;
	for(i=0; i<= 12; i++)
	{
		int el = i*2 + 3;
		printf("%d  %d\n",push(s1,el),el);
	};

	for(i=0; i<= 10; i++)
		printf("%d  %d\n",i,pop(s1));

	while(!isempty(s1))
		printf("%d\n",pop(s1));

	close(s1);
	return 0;
}
