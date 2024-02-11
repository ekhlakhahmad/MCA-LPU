#include<stdio.h>

struct node
{
  int data;
  struct node*next;
};

struct node*tail=NULL;
void creation ();
void traverse ();
int  length ();
void addatafter();
void addatbegin();
void deletionb();
void deletione();
void deletionp();

int main()
{
  int choice,len;
  
  while (1)
  {
    printf("\n1.creation\n");
    printf("2.addatbegin\n");
    printf("3.addatafter\n");
    printf("4.traverse\n");
    printf("5.length\n");
    printf("6.deletionb\n");
    printf("7.deletione\n");
    printf("8.deletionp\n");
    printf("9.Quit\n");
    
    printf("enter your choice\n");
    scanf("%d",&choice);
    
   switch (choice)
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
           deletionb();
           break;
   case 7:
           deletione();
           break;
    case 8:
           deletionp();
           break;
           
     case 9:
            exit(0);
     default:
            printf("invalid choice\n");
     
   }
    
  }
  
  
  return 0;
}

void creation ()
{
  struct node*newnode;
  newnode=(struct node*) malloc (sizeof(struct node));
  newnode->next=NULL;
  printf("enter node data\n");
  scanf("%d",&newnode->data);
  
  if(tail==NULL)
  {
    tail=newnode;
    tail->next=newnode;
  }
  else
{
  newnode->next=tail->next;
  tail->next=newnode;
  tail=newnode;
  
}
  
}

void traverse ()
{
  struct node*temp;
  temp=tail->next;
  
  if(tail==NULL)
  {
    printf("list is empty\n");
  }
  else
{
  do
{
  printf("%d ",temp->data);
  temp=temp->next;
} while (temp!=tail->next);
}
}


int length ()
{
  struct node*temp;
  temp=tail->next;
  int count=0;
  if(tail==NULL)
  {
    return count;
  }
  else
{
  do
{
  count++;
  temp=temp->next;
}while(temp!=tail->next);
}
  return count;

}

void addatbegin ()
{
  struct node*newnode;
  newnode=(struct node*) malloc (sizeof(struct node));
  printf("enter node data\n");
  scanf("%d",&newnode->data);
  newnode->next=NULL;
  
  if(tail==NULL)
  {
    tail=newnode;
    tail->next=newnode;
  }
  else
{
  newnode->next=tail->next;
  tail->next=newnode;
}
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
    printf("%d location is present only\n",len);
  }
  else
{ struct node*newnode,*temp;
  newnode=(struct node*) malloc (sizeof(struct node));
  printf("enter node data\n");
  scanf("%d",& newnode->data);
  newnode->next=NULL;
  temp=tail->next;
  
  while (i<loc)
  {
    temp=temp->next;
    i++;
  }
  newnode->next=temp->next;
  temp->next=newnode;
}
  
  
}

void deletionb()
{
  struct node*temp;
  temp=tail->next;
  if(tail==NULL)
  {
    printf("liat is empty\n");
  }
  else
{  
  tail->next=temp->next;
  temp->next=NULL;
  free(temp);
}
}

void deletione()
{
  struct node*current,*previous;
  current=tail->next;
  
  if(tail==0)
  {
    printf("list is empty\n");
  }
  else if(current->next==current)
    {
      tail=0;
      free(current);
    }

else
{
  while (current->next!=tail->next)
  {
    previous=current;
    current=current->next;
  }
  previous->next=tail->next;
  current->next=NULL;
  tail=previous;
}
}

void deletionp()
{
  struct node*p,*q;
  int loc,i=1,len;
  printf("enter location\n");
  scanf("%d",&loc);
  p=tail->next;
  len=length ();
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
  while (i<loc-1)
  {
    p=p->next;
    
    i++;
    
  }
  q=p->next;
  
  if(q->next==tail->next)
  {
  p->next=q->next;
  q->next=NULL;
  tail=p;
  free(q);
  }
  else
  {
  p->next=q->next;
  q->next=NULL;
  free(q);
  }
  }
  }
  