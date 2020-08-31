#ifndef NODEHEAD_H
#define NODEHEAD_H

// Node for storing characters
typedef struct node
{
		char ch;
		struct node * next;
} node;

// Starting Node
node * start = NULL;


// Function declartions 
node * load_data(node * , const char * ); 
void print_reverse(node * );
void free_nodes(node * );




#endif
