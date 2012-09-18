#include "linkedlist.h"


LinkedList::LinkedList(){
	p = 0;
}

void LinkedList::add(const double & data)
{
   node *q,*t;
 
   if( p == 0 )
   {
      p = new node;
	  p->data = data;
	  p->link = 0;
   }
   else
   {
        q = p;
      while( q->link != 0 )
           q = q->link;
 
      t = new node;
      t->data = data;
      t->link = 0;
      q->link = t;
   }
}

double LinkedList::get(const int & index) const{

	   node *q;
	   int i = 0;

	  q = p;
      while( q->link != 0 && i<index){
           q = q->link;
		   i++;
	  }

	 return q->data;

}
