/*Doublelinkedlist*/
#include<stdio.h>
struct node
{
int data;
struct node*next;
struct node*previous;
};
struct node*head=NULL;
struct node*tail=NULL;


void creation();
void addatbegin();
void addatend();
void addatafter ();
void traverse ();
int length ();
void deletionb ();
void deletione ();
void deletionp ();

int main()
{
int ch,len;
while(1)
{
printf("\n1.Creation\n");
printf("2.addatbegin\n");
printf("3.addatend\n");
printf("4.addatafter\n");
printf("5.traverse\n");
printf("6.length\n");
printf("7.deeltionb\n");
printf("8.deletione\n");
printf("9.deletionp\n");
printf("10.Quit\n");

printf("enter your choice\n");
scanf("%d",&ch);

switch (ch)
{
case 1:
       creation ();
       break;
case 2:
      addatbegin ();
      break;
case 3:
      addatend ();
       break;
      
case 4:
      addatafter ();
      break;
case 5:
       traverse ();
       break;
case 6:
       len=length ();
       printf("length is %d\n",len);
       break;
case 7:
       deletionb ();
       break;
case 8:
      deletione();
       break;
case 9:
       deletionp();
        break;
case 10:
       exit(0);
       
default:
       printf("invalid choice\n");
}
}
 
    return 0;
}

void creation()
{
  struct node*newnode;
  newnode=(struct node*) malloc (sizeof(struct node));
  newnode->next=NULL;
  newnode->previous=NULL;
  printf("enter node data\n");
  scanf("%d",&newnode->data);
  
  if(head==NULL)
  {
    head=tail=newnode;
  }
  else
{
  newnode->previous=tail;
  tail->next=newnode;
  tail=newnode;
  
}
}

void traverse ()
{
  struct node*temp;
  temp=head;
  if(head==NULL)
  {
    printf("list is empty\n");
  }
  else
{
  while (temp!=NULL)
  {
    printf("%d ",temp->data);
    temp=temp->next;
  }
}
}

void addatbegin ()
{
   struct node*newnode;
  newnode=(struct node*) malloc (sizeof(struct node));
  newnode->next=NULL;
  newnode->previous=NULL;
  printf("enter node data\n");
  scanf("%d",&newnode->data);
  
  if(head==NULL)
  {
    head=tail=newnode;
  }
  else
{
  head->previous=newnode;
  newnode->next=head;
  head=newnode;
}
}

void addatend()
{
   struct node*newnode;
  newnode=(struct node*) malloc (sizeof(struct node));
  newnode->next=NULL;
  newnode->previous=NULL;
  printf("enter node data\n");
  scanf("%d",&newnode->data);
  
  if(head==NULL)
  {
    head=tail=newnode;
  }
  else
{
  newnode->previous=tail;
  tail->next=newnode;
  tail=newnode;
}
}

int length ()
{
  int count=0;
  struct node*temp;
  temp=head;
  while (temp!=NULL)
  {
    temp=temp->next;
    count++;
  }
  return count;
}

void addatafter ()
{
  int loc,i=1,len;
  printf("enter location\n");
  scanf("%d",&loc);
  len=length ();
  if(loc>len)
  {
    printf("invalid location\n");
    printf("%d location is present only\n]",len);
  }
  else
{
    struct node*newnode,*temp;
  newnode=(struct node*) malloc (sizeof(struct node));
  newnode->next=NULL;
  newnode->previous=NULL;
  printf("enter node data\n");
  scanf("%d",&newnode->data);
  
  temp=head;
  while (i<loc)
  {
    temp=temp->next;
    i++;
  }
  temp->next->previous=newnode;
  newnode->next=temp->next;
  temp->next=newnode;
  
}
  
}

void deletionb()
{
  struct node*temp;
  temp=head;
  
  if(head==NULL)
  {
    printf("list is empty\n");
  }
  else
{
  head=temp->next;
  temp->next=NULL;
  free (temp);
}
}

void deletione()
{
 struct node*temp;
 temp=tail;
 if(head==NULL)
 {
   printf("list is empty\n");
 }
else
{
 tail=temp->previous;
 tail->next=NULL;
 free(temp);
  
}
}

void deletionp()
{
  int loc,i=1,len;
  printf("enter location\n");
  scanf("%d",&loc);
  len=length ();
  if(loc==1)
  {
    deletionb();
  }
  else if(loc==len)
  {
    deletione();
  }
  else
{
  struct node*temp;
  temp=head;
  while (i<loc)
  {
    temp=temp->next;
    i++;
  }
  temp->next->previous=temp->previous;
  temp->previous->next=temp->next;
  temp->next=NULL;
  free(temp);
  
}
}