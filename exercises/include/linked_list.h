struct Node
{
	int value;
	struct Node *next;
}; typedef struct Node list;

list *allocate_node(void);
list *insert_list(list *L, int element);
list *delete_list(list *L);
list *remove_list_by_pos(list *L, int pos);
list *concat_list(list *L1, list *L2);
list *remove_duplicates(list *L);
list *remove_element(list *L, int element);
void print_k_list(list *L, int k);
void print_list(list *L);
