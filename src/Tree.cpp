#include "Tree.h"
#include<stdlib.h>
Tree::Tree(int nu)
{
    //ctor
    num =  nu;
    parent = NULL;
    child_num = -1;
}

void Tree::append(Tree* tree){
    this -> child_num ++;
    this -> child[child_num] = tree;
    tree -> parent = this;
}
int Tree::_count(){
    int sum = 0;
    for (int temp = this -> child_num ; temp >= 0 ; temp --){
        sum += child[temp] -> _count();
    }
    /*while (temp >= 0){
        sum += child[temp] -> _count();
        temp --;
    }
    */
    return sum + 1;
}
Tree* Tree::getparent(){
    return this -> parent;
}
int Tree::getnum(){
    return this -> num;
}
Tree::~Tree()
{
    //dtor
}
