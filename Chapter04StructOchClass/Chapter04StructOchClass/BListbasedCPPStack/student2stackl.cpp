#include "student2stackl.h"
#include <cassert>
#include <iostream>

using namespace std;

const char* nameOfStudent2(){
    return "Ahmed Elhasan";
}

StackL::StackL(){
    // TODO
    m_size=0;
    m_pTop=nullptr;

}


StackL::StackL(const StackL& theOther){


    m_size = theOther.m_size;

    m_pTop = nullptr;

    Link *previousLink = nullptr;
    for(const Link *PoLink = theOther.m_pTop; PoLink != nullptr; PoLink= (*PoLink).m_pNext){
        Link *PCopy= new Link;
        (*PCopy).m_data=(*PoLink).m_data;
        (*PCopy).m_pNext= nullptr;

        if ( previousLink== nullptr)
            m_pTop= PCopy;
        else ( *previousLink).m_pNext = PCopy;
        previousLink=PCopy;

    }

}

StackL::~StackL(){
    // TODO
        while(m_pTop != nullptr){
            pop();
        }

//    while(StackL :: size() > 0){
//        StackL::pop() ;
//    }
}

void StackL::push(float value){
    // TODO
    Link *pNewTop= new Link;
    (*pNewTop).m_data= value;
    (*pNewTop).m_pNext= m_pTop;
    m_pTop=pNewTop;
    m_size +=1;
}

void StackL::pop(){
    // TODO
    Link *pOldtop=m_pTop;
    m_pTop=m_pTop->m_pNext;
    delete pOldtop;
    m_size -=1;


}


float StackL::top() const {
    // TODO
    assert( m_size >0);

    return m_pTop->m_data; // (fel, ändra)
}

int StackL::size() const {
    // TODO
    return m_size; // (fel, ändra)

}


void studentTest2(){

    cout << endl << endl <<  "studentTest2..." << endl;

    // Skriv din egen testkod här
}

