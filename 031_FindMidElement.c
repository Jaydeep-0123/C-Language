#include<stdio.h>
struct Node
{
  int data;
  struct Node *next;
}*t,*head=NULL;

struct Node* allocateMemory(int val)
{
    t=(struct Node*)malloc(sizeof(struct Node));
    t->data=val;
    t->next=NULL;
    return t;
}


void add(int val)
{
   t=allocateMemory(val);
   if(head==NULL)
      head=t;
   else
   {
      t->next=head;
      head=t;
   }
}

void show()
{
   printf("\n");
   if(head==NULL)
   {
       printf("Node is empty");
       return;
   }
   t=head;
   while(t!=NULL)
   {
       printf("%d ",t->data);
       t=t->next;
   }

}
int del()
{
   int val;
   if(head==NULL)
   {
       return ;
   }
   t=head;
   val=head->data;
   head=head->next;
   free(t);
   return val;



}
void addAtPos(int val,int pos)
{
    int c=2;
    struct Node *tmp=head;
    t=allocateMemory(val);
    if(head==NULL)
    {
	head=t;
    }
    else
    {
       while(c<pos&&tmp!=NULL)
       {
	    tmp=tmp->next;
       }
       t->next=tmp->next;
       tmp->next=t;

}
}

int midElement()
{
    //t=head;
    struct Node *t1=head, *tmp=head;

    while(t1->next!=NULL)
    {
	t1=t1->next->next;
	tmp=tmp->next;
    }

    return tmp->data;

}
int main()
{
   int i;
   for(i=1;i<=7;i++)
   {
       add(5*i);
   }
   show();
  //addAtPos(44,3);
  show();
   printf("\n%d",midElement());
  return 0;

}


   