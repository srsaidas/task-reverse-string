#include <stdio.h>
#include <stdlib.h>
#include "node.h"

// Starting Node
node * start = NULL;

int main(int argc, char * argv[])
{
		if (argc<=1)
		{
				printf("Not enough arguments\n");
				printf("Use ./list <Name>\n");
				return 0;
		}


		// argv[1] contain the string passed by user
		start = load_data(start, argv[1]);

		// Reversing the data
		print_reverse(start);

		// Freeing the node to avoid memory leakage
		free_nodes(start);

		printf("\n");

		//return 0 for sucesss full execution
		return 0;
}
