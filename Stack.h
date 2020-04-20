#ifndef STACK
#define STACK
#include "LinkedList.h"
using namespace std;

//1. 템플릿 클래스로 확장해야함
//2. Stack형식으로 Delete 함수 재정의해야함
//주의: first, current_size는 class의 멤버 변수이기 때문에 this 포인터를 사용하여 가져와야함

//LinkedList class를 상속받음
template <class T>
class Stack: public LinkedList<T>{
public:
	bool Delete(T &element);
};

template <class T>
bool Stack <T>::Delete(T &element){
			//first가 0이면 false반환
			if(this->first){
			Node<T> *imsi=this->first;
			element=this->first->data;
			this->first=this->first->link;
			this->current_size--;
			delete imsi;
			return true;
			}
			else return false;
};
#endif

