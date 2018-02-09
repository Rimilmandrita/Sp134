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
};

class bubbleSort

int main() {

 linkedList l; // Declaring object of class linkedList

 l.insert(1);

 l.insert(2);

 l.display();

 cout<<"The total number of elements in the list is "<<l.countItems()<<endl;

	return 0;

}

 
