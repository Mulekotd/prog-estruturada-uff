struct Node
{
	int value;
	struct Node *next;
}; typedef struct Node list;

int length(list *L);

list *allocate_node(void);
list *delete_list(list *L);
list *remove_duplicates(list *L);
list *remove_element(list *L, int element);
list *insert_list(list *L, int element);
list *concat_list(list *L1, list *L2);
list *merge_list(list *L1, list *L2);
list *rotate_list(list *L, int k);

void recursive_print(list *L);
void print_list(list *L);
void print_k_list(list *L, int k);
