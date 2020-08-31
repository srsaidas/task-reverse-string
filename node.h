#ifndef MY_NODEHEADER_H
#define MY_NODEHEADER_H

// Node for storing characters
typedef struct node
{
		char ch;
		struct node * next;
} node;



// Function declartions 
node * load_data(node *, const char *); 
void print_reverse(node *);
void free_nodes(node *);




#endif
