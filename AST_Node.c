#include "AST_Node.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

#define QUEUE_SIZE 200


struct Node* newNode(){
	struct Node* node = (struct Node *)malloc(sizeof(struct Node));
	node->childnum=0;
	node->list = (struct Node *)malloc(sizeof(struct Node)*CHILD_NUM_MAX);
	if(node->list==NULL){
		printf("\nERROR!!!\n");
	}
	return node;//,,, forget to add 
}

void addChild(struct Node* root,struct Node* child){
	if(root->childnum>=CHILD_NUM_MAX){
		printf("ERROR\n");
		return;
	}
	*(root->list + root->childnum) = *child;
	root->childnum++;
}

void setType(struct Node* node,char * s){
	strcpy(node->typeName,s);
}

void print(struct Node* node){

	struct Node *p=node;
	//queue
	struct Node* queue[QUEUE_SIZE];
	int rear=0,front=0;
	int i;

	if(node ==NULL){
		return;
	}
	for(i=0;i<QUEUE_SIZE;i++){
		queue[i]=NULL;
	}
	queue[rear++]=p;
	printf("%s(childnum:%d)\n",p->typeName,p->childnum);

	while(front!=rear){//not empty
		//out line
	    p=queue[front];
	    front=(front+1)%QUEUE_SIZE;

		//printf("%s",p->typeName);

		//child in line
		for(i=0;p!=NULL&& i < p->childnum;i++){
			//insert
			/*if(p->childnum==3){
				break;
			}*/
			if((rear+1)%QUEUE_SIZE!=front){//not full
				queue[rear]=((p->list)+i);
	            rear=(rear+1)%QUEUE_SIZE;
	            printf("%s(childnum:%d)\t",((p->list)+i)->typeName,((p->list)+i)->childnum);
			}
		}
		printf("\n");
	}
}