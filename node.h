#ifndef NODEHEAD
#define NODEHEAD

// Node for storing characters
typedef struct node
{
		char ch;
		struct node * next;
} node;

// Starting Node
node * start = NULL;


// Function declartions 
node * load_data(node * start, const char * data); 
void print_reverse(node * start);
void free_nodes(node * start)




#endif
