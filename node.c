
// Function defintion for loading the data
node * load_data(node * start, const char * data)
{
		node * temp = NULL, * next_node = NULL;

		while(*data)
		{
				temp = (node *)malloc(sizeof(node));
				temp->next = NULL;
				temp->ch = *data++;

				if(start == NULL)
				{
						start = temp;
				}
				else
				{
						next_node->next = temp;
				}

				next_node = temp;

		}
		return start;

}

// Function definition for reversing data
void print_reverse(node * start)
{

		if(start->next)
		{
				print_reverse(start->next);
		}
		printf("%c", start->ch);
		return;
}

// Function definition for Freeing nodes
void free_nodes(node * start)
{
		node * next_node = NULL;
		next_node =start;
		while(next_node)
		{
				next_node= next_node->next;
				free(next_node);
		}
}
