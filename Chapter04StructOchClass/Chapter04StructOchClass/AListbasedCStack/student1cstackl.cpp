#include "student1cstackl.h"
#include <cassert>
#include <iostream>
#include <cassert>

using namespace std;

const char* nameOfStudent1(){
    return "Ahmed Elhasan";
}

CStackL  CStackLConstruct(){
    // Jag lämnar kvar denna implementering
    CStackL theStack;
    theStack.m_pTop = nullptr;
    theStack.m_size = 0;
    return theStack;
}




CStackL  CStackLConstruct(const CStackL &other){

    // TODO
    CStackL theStack;
    theStack.m_size = other.m_size;

    theStack.m_pTop = other.m_pTop;

 Link *pPreviousLink = nullptr;
    for(const Link *PoLink = other.m_pTop; PoLink != nullptr; PoLink= (*PoLink).m_pNext){
        Link *PCopy= new Link;
        (*PCopy).m_data=(*PoLink).m_data;
        (*PCopy).m_pNext= nullptr;

        if ( pPreviousLink== nullptr)
            theStack.m_pTop= PCopy;
        else ( *pPreviousLink).m_pNext = PCopy;
        pPreviousLink=PCopy;

    }
    return theStack; // (fel, ändra)

}



void   CStackLDestruct(CStackL *pDettaObjekt){
    // TODO
    while(CStackLSize(pDettaObjekt) != 0){
          CStackLPop(pDettaObjekt);
    }
}

void   CStackLPush(CStackL *pDettaObjekt, float data){
    // TODO
    Link *pNewTop =  new Link;
    (*pNewTop).m_data = data;
    (*pNewTop).m_pNext = (*pDettaObjekt).m_pTop;
    (*pDettaObjekt).m_pTop = pNewTop;
    (*pDettaObjekt).m_size +=1;
}


float  CStackLTop(CStackL *pDettaObjekt){
    // TODO
    assert(pDettaObjekt->m_size > 0);

    return (*pDettaObjekt).m_pTop->m_data; // (fel, ändra)
}


void CStackLPop(CStackL *pDettaObjekt){
    // TODO


    Link *pold=pDettaObjekt->m_pTop;
    pDettaObjekt->m_pTop=pDettaObjekt->m_pTop->m_pNext;
    delete pold;
    pDettaObjekt->m_size-=1;




}

int  CStackLSize(CStackL *pDettaObjekt){
    // TODO


    return pDettaObjekt->m_size; // (fel, ändra)
}

// ----- Din testkod

void studentTest1(){

    cout << endl << endl << "studentTest1..." << endl ;
    // Skriv din egen testkod här
}

