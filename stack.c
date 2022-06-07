// STACK PROGRAME WITH LINK LIST:-
// ----------------------------------------
//stack using linked list
#include<stdio.h>
#include<stdlib.h>
struct Node
{
	int data;
	struct Node *next;
};

struct Node *stack=NULL;

void push(int data)
{
	struct Node *create;
	create=(struct Node*)malloc(sizeof(struct Node));
	create->data=data;
	create->next=stack;
	stack=create;
}

int pop()
{
	int del;
	struct Node *dnode;
	del=stack->data;
	dnode=stack;
	stack=stack->next;
	free(dnode);
	return del;
}

int peek()
{
	int item;
	item=stack->data;
	return item;
}

int main()
{
	int data,del,item,choice;
	while(1)
	{
		printf("\n1. Push\n2. Pop\n3. Peek\n4. Exit\nEnter your choice:");
		scanf("%d",&choice);
		if(choice==4)
		break;
		switch(choice)
		{
			case 1:
					printf("Enter the data:");
					scanf("%d",&data);
					push(data);
					break;
			case 2:
					if(stack==NULL)
					{
						printf("Stack empty!");
						break;
					}
					del=pop();
					printf("Item popped: %d",del);
					break;
			case 3:
					if(stack==NULL)
					{
						printf("Stack empty!");
						break;
					}
					item=peek();
					printf("Item at top of the stack: %d",item);
					break;
			default:
					printf("Invalid choice");
					break;
		}
	}
}
             
//                -:SUMIT WRITE A STACK PROGRAME WITH LINK LIST:-
//            -------------------------------------------------------


// /* Write a program of Stack Concepet By Using Link_List Data Structure */

// #include<stdio.h>
// #include<stdlib.h>

// struct node
// {
// 	int data;
// 	struct node *link;
// };

// struct node *top=NULL;

// void push_data(int data)
// {
// 	struct node *temp=top;
// 	temp=(struct node*)malloc(sizeof(struct node));
// 	temp->data=data;
// 	temp->link=top;
// 	top = temp;
// }

// int pop_data()
// {
// 	struct node *temp;
// 	temp = top;
// 	int end;
// 	end = temp->data;
// 	top = top->link;
// 	temp->link=NULL;
// 	free(temp);
// 	return (end);
// }

// int peek_data()
// {
// 	int max;
// 	max = top->data;
// 	return (max);
// }

// void display_data()
// {
// 	struct node *temp;
// 	temp=top;
// 	printf("\n Data In Stack : ");
// 	while(temp!=NULL)
// 	{
// 		printf(" %d ",temp->data);
// 		temp = temp->link;
// 	}
// }

// void sorting_ascending_data()
// {
// 	struct node *temp,*ptr;
// 	temp=top;
// 	int temp_1;
// 	printf("\n Data In Sorting In Ascending order In Stack : ");
// 	while(temp!=NULL)
// 	{
// 		ptr = temp->link;
// 		while(ptr!=NULL)
// 		{
// 			if(temp->data > ptr->data)
// 			{
// 				temp_1 = temp->data;
// 				temp->data = ptr->data;
// 				ptr->data = temp_1;
// 			}
// 			ptr = ptr->link;
// 		}
// 		printf(" %d ",temp->data);
// 		temp = temp->link;
// 	}
// }

// void sorting_descending_data()
// {
// 	struct node *temp,*ptr;
// 	temp = top;
// 	int temp_1;
// 	printf("\n Data In Sorting In Descending order In Stack : ");
// 	while(temp!=NULL)
// 	{
// 		ptr = temp->link;
// 		while(ptr!=NULL)
// 		{
// 			if(temp->data < ptr->data)
// 			{
// 				temp_1 = temp->data;
// 				temp->data = ptr->data;
// 				ptr->data = temp_1;
// 			}
// 			ptr = ptr->link;
// 		}
// 		printf(" %d ",temp->data);
// 		temp = temp->link;
// 	}
// }

// void search_data(int key)
// {
// 	struct node *temp;
// 	temp=top;
// 	int found=0;
// 	while(temp!=0)
// 	{
// 		if(key==temp->data)
// 		{
// 			found=1;
// 			break;
// 		}
// 		temp = temp->link;
// 	}
// 	if(found==1)
// 	{
// 		printf("\n %d Data is In Stack ",key);
// 	}
// 	else
// 	{
// 		printf("\n %d Data is not In Stack ",key);
// 	}
// }

// int main()
// {
// 	int data,choice,res,key;
// 	while(1)
// 	{
// 		    printf("\n_________________________________________________________");
// 			printf("\n1. Push the data In Stack \n2. Pop the data In stack \
// \n3. Peek data in stack \n4. Data Display \n5. Arrange the data in ascending order \
//  \n6. Arrange data in descending order \n7. Search data in stack \n8. Exit ");
//             printf("\n__________________________________________________________");
//             printf("\n Enter Your Choice : ");
//             scanf("%d",&choice);
//             if(choice==8)
//             {
//             	break;
// 			}
// 			switch(choice)
// 			{
// 				case 1: 
// 				         printf("\n Enter the data in stack : ");
// 				         scanf("%d",&data);
// 				         push_data(data);
// 				         break;
				         
// 				case 2: 
// 				        if(top==NULL)
// 				        {
// 				        	printf("\n Stack is empty !");
// 						}
// 						else
// 						{
// 							res = pop_data();
// 							printf("\n Data Pop In Stack : %d",res);
// 						}
// 						break;
						
// 				case 3:
// 					    if(top==NULL)
// 					    {
// 					    	printf("\n Stack is empty !");
// 						}
// 						else
// 						{
// 							res = peek_data();
// 							printf("\n Peek Data In Stack : %d",res);
// 						}
// 						break;
						
// 				case 4:
// 					    if(top==NULL)
// 					    {
// 					    	printf("\n Stack is empty !");
// 						}
// 						else
// 						{
// 							display_data();
// 						}
// 						break;
						
// 				case 5: 
// 				        if(top==NULL)
// 				        {
// 				        	printf("\n Stack is empty !");
// 						}
// 						else
// 						{
// 							sorting_ascending_data();
// 						}
// 						break;
						
// 				case 6:
// 					    if(top==NULL)
// 					    {
// 					    	printf("\n Stack is empty !");
// 						}
// 						else
// 						{
// 							sorting_descending_data();
// 						}
// 						break;
						
// 				case 7:
// 					    if(top==NULL)
// 					    {
// 					    	printf("\n Stack is empty !");
// 						}
// 						else
// 						{
// 							printf("\n Enter the data to search in stack : ");
// 							scanf("%d",&key);
// 							search_data(key);
// 						}
// 						break;
						
// 				default :
// 				          printf("\n Invlaid Choice !");  	
// 			}
// 	}
// 	return 0;
// }

          