//arraylist.cpp
#ifndef ARRAYLIST_H
#include "arraylist.h"
#endif

template <class T>
void arraylist<T>::resize(){
    //resize the array so it can accomodate more data
    //precondition - size of the array == size of the data
    //postcondition - new array that's twice the size
    
    //get a new temp array
    T *temp = new T[arrlength *2];
    for (int i = 0; i < arrlength; i++)
        temp[i]=data[i];
    data = temp;
    arrlength *= 2;
}

template <class T>
void arraylist<T>::needtoresize(){
    //return if the data is equal to the array length
    
    return arrlength == listsize;
}

template<class T>
void arraylist<T>::add(T item){
    //add item to the end of the list
    
    //check to see if there's enough space
    if (needtoresize())
        resize();
        
    data[listsize] = item;
    listsize ++;
}

template<class T>
void arraylist<T>::add(int index,T item){
    //add the item to the indicated index and allothers gets bumpped down
    if (needtoresize())
        resize();
        
        /*
        0 1 2 3 4
        8 3 2
        
        insert a 3 in spot 1.
        0 1 2 3 4
        8 3 3 2
         */
    
    for( int i; i >= index; i --)
        data[listsize+1] = data[listsize];
        
        data[index] = item;
        listsize ++;
}

template <class T>
void arraylist<T>::remove(int index){
    /*so if list is
    0 1 2 3 4 
    if i want to remove 2
    0 1 3 4
    */
    for(int i = index; i< listsize; i++)
        data[i] = data[i+1];
    listsize --;
}

template <class T>
T arraylist<T>::get(int index){
    if(index <= listsize)
        return data[index];
    //else
    return NULL;
    
}

template<class T>
void arraylist<T>::set(int index, T item){
    if (index >= 0 && index <= listsize)
        data[index] = item;
}

template<class T>
int arraylist<T>::indexof(T item){
    for (int i = 0; i < listsize; I++)
        if(item == data[i])
            return i;
    //did not find the item
    return -1;
}

template<class T>
int arraylist<T>::lastindexof(T item){
    for(int i = 0; i<listsize;I++)
        if(item == data[i])
            return i;
    //didn't find it
    return -1;
}

template<class T>
int arraylist<T>::contains(T item){
    return (indexof(item) > -1);
}

template<class T>
int arraylist<T>::size(){
    return listsize;
}