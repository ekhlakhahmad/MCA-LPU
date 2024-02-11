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
void addatafter ();
void traverse ();
int  length ();
void deletionb ();
void deletione ();
void deletionp ();
int main()
{
int ch,len;
while(1)
{
printf("\n1.creation\n");
printf("2.addatbegin\n");
printf("3.addatafter\n");
printf("4.traverse\n");
printf("5.length\n");
printf("6.deeltionb\n");
printf("7.deletione\n");
printf("8.deletionp\n");
printf("9.exit\n");

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
      addatafter ();
      break;
case 4:
       traverse ();
       break;
case 5:
       len=length ();
       printf("length is %d\n",len);
       break;
case 6:
       deletionb ();
       break;
case 7:
      deletione();
       break;
case 8:
       deletionp();
        break;
case 9:
       exit(0);
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
    tail->next=tail;
    tail->previous=tail;
  }
  else
{
  newnode->next=tail->next;
  newnode->previous=tail;
  tail->next=newnode;
  head->previous=newnode;
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
  do
{
  printf("%d ",temp->data);
  temp=temp->next;
 }while(temp!=tail->next);
  
  
}
}

int length ()
{
  struct node*temp;
  temp=head;
  int count=NULL;
  
  if(head==NULL)
  {
    printf("list is empty\n");
  }
  else
{
  do{
    count++;
    temp=temp->next;
  
} while (temp!=tail->next);

return count;
  
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
    tail->next=tail;
    tail->previous=tail;
  }
  else
{
  newnode->next=head;
  head->previous=newnode;
  tail->next=newnode;
  newnode->previous=tail;
  head=newnode;
}
  
 
}

void addatafter ()
{
  struct node*temp;
  temp=head;
  int loc,i=1,len;
  printf("enter location\n");
  scanf("%d",&loc);
  len=length ();
  if(loc<1 || loc>len)
  {
    printf("invalid location\n");
  }
  else
{
  struct node*newnode;
  newnode=(struct node*) malloc (sizeof(struct node));
  newnode->next=NULL;
  newnode->previous=NULL;
  printf("enter node data\n");
  scanf("%d",&newnode->data);
  
  while (i<loc)
  {
    temp=temp->next;
    i++;
  }
  newnode->next=temp->next;
  newnode->previous=temp;
  temp->next=newnode;
  
  }
  
}

void deletionb()
{
  struct node*temp;
  temp=head;
  if(head==NULL)
  {
    printf("List is empt\n");
  }
  else if(head->next==head)
  {
    head=tail=0;
    free(temp);
  }
  else
{
  head=head->next;
  head->previous=tail;
  tail->next=head;
  free(temp);
}
  
  
}

void deletione()
{
  struct node*temp;
  temp=tail;
  if(head==NULL)
  {
    printf("List is empty\n");
  }
  else if(head->next==head)
  {
    head=tail=0;
    free(temp);
  }
  else
{
  temp=temp->previous;
  temp->next=head;
  head->previous=temp;
  tail=temp;
}
}

void deletionp()
{
 struct node*temp;
 temp=head;
 int loc,i=1,len;
 printf("enter location\n");
 scanf("%d",&loc);
 len=length();
 if(loc<1 || loc>len)
 {
   printf("invalid choice\n");
 }
 else if(loc==1)
 { 
   deletionb();
 }
 else
{
  while (i<loc)
  {
    temp=temp->next;
    i++;
  }
  temp->next->previous=temp->previous;
  temp->previous->next=temp->next;
  
  if(temp->next==head)
  {
    tail=temp->previous;
    free (temp);
  }
  else
{
  free(temp);
}
}
}