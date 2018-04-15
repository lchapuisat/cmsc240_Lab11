#ifndef __LINKEDLIST_H__
#define __LINKEDLIST_H__

#include <list>
#include <vector>

template <class T>
class LinkedList
{
   private:
     std::list<T> theList;

   public:
     LinkedList();
     LinkedList(const LinkedList<T>& other);
     ~LinkedList();

     int  size() const;
     void add(T element);

     T get(int index) const;
     T remove(int index); 

     std::vector<T> toArray() const;

     LinkedList<T>& operator+=( const T& item );
};

//default constructor
template <class T> LinkedList<T>::LinkedList() 
{
	std::list<T> theList;
}

//destructor
template <class T> LinkedList<T>::~LinkedList() {}

// copy constructor
template <class T>
LinkedList<T>::LinkedList(const LinkedList<T>& other)
{
	//list<T>::iterator

	typename std::list<T>::iterator it = other.theList.begin();
	while(it != other.theList.end())
	{
		theList.push_back(it);
		it++;
	}
}

// add()
template <class T>
void LinkedList<T>::add( T element )
{
	theList.push_back(element);
}

// size()
template <class T>
int LinkedList<T>::size() const
{
	return theList.size();
}

// remove()
template <class T>
T LinkedList<T>::remove( int index )
{
	// erase and return
	//theList.get(index);
	T t;
	return t;

}

// get() throws exception if oob
template <class T>
T LinkedList<T>::get( int index ) const
{
	typename std::list<T>::iterator it = theList.begin();
	while(it != index)
	{
		it++;
	}
	return it;
}

// make a linked list an array
/*
template <class T>
std::vector<T> LinkedList<T>::toArray( T element ) const
{
	std::vector<T> v;
	return v;
}
*/

// operator (+=)
template <class T>
LinkedList<T>& LinkedList<T>::operator+=( const T& item )
{
	//implement
}




#endif