#include <iostream>
#include<climits>
using namespace std;
template <typename T>
class Node{
  public :
  T data;
  Node<T> *next;

  Node(int data){
      this->data = data;
      next =NULL;
  }
};
template <typename T>
class Stack{
  int size;
  Node<T> *head;
  public :
  Stack(){
      head = NULL;
      size = 0;
  }
  int sizeofstack(){
      return size;
  }

  bool isempty(){
      return size==0;
  }

  void push(T num){
      Node<T> *newnode = new Node<T>(num);
      newnode->next = head;
      head = newnode;
      size++;


  }
  T pop(){
      if(isempty()){
          cout<<"Empty stack"<<endl;
          return 0;
      }
      T ans = head->data;
      Node<T> *temp = head;
      head = head->next;
      delete temp;
      size--;
      return ans;
  }

  T top(){
      if(isempty()){
          cout<<"Empty stack"<<endl;
          return 0;
      }
      return head->data;
  }



};
