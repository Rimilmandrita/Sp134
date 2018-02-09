#include <iostream>
using namespace std;



struct node // structure having variable for data section and a pointer for the next node. 
{
 int data;
 node *next;
 };	

   class linkedList //  class  containing the functions to handle the nodes
{
 private:

    node *head, *tail; //Declaring two important pointers, i.e. head and tail
 public:

    linkedList() //The constructer will make them NULL to avoid any garbage value.
 {
  head=NULL;
 tail=NULL;

  }
 void insert(int value)

    {

      node *temp=new node;

      temp->data=value;

 temp->next=NULL;
 if(head==NULL)

     {
       head=temp;
      	
      }

    else

        tail->next=temp;
        tail=temp;

    }

int countItems() //To count the number of elements in the list

    {       int count=0;
    	node *temp=new node;
	temp= head;

    	while(temp!=NULL)
    { temp=temp->next;
           count++;
         }
	return count;

    }

   void display()// to display the elements

    {
   	node*temp= new node;
    	temp=head;
    	cout<<"The list is:";
    	while(temp!=NULL)

    	{
    		cout<<temp->data<<"->";
    		temp=temp->next;
	}
    cout<<"NULL"<<endl;
   }
   int sort(int n)
{           node *temp=new node;
	node *temp1=new node;
	node *temp2=new node;
	temp=head;
for (int i=0;i<n;i++)
    { 
	for (int j=0;j<(n-i)-1;j++)
   {
   	if(temp->data > temp->next->data)
   	{
   	temp2=temp;
   	temp=temp->next;
   	temp->next=temp;
   		
   	}
   }
    }
    return 0;
}
};



int main() {

 linkedList l; // Declaring object of class linkedList
 

 l.insert(1);
 l.insert(4);
 l.insert(2);
 l.insert(3);
 l.display();

 cout<<"The total number of elements in the list is "<<l.countItems()<<endl;
 int n=l.countItems();
 
 
 l.sort(n);
 l.display();

	return 0;
}

 
