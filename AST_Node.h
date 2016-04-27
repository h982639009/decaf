
#define CHILD_NUM_MAX 5
#define ATTR_NAME_MAX_LEN 20

struct Node{
	int childnum;
	char typeName[ATTR_NAME_MAX_LEN];
	struct Node * list;

};

struct Node* newNode();
void addChild(struct Node* root,struct Node* child);
void print(struct Node* node);