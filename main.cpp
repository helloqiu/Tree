#include <iostream>
#include "Tree.h"
using namespace std;

int main()
{
    //cout << "Hello world!" << endl;
        Tree* root = new Tree(100);
        Tree* child1 = new Tree(200);
        Tree* child2 = new Tree(300);
        root->append(child1);
        root->append(child2);
        cout << child1 -> getparent() -> getnum()<<endl;
        cout << child1 -> getparent() -> getnum() << endl;
        cout << root->_count() << endl;
    return 0;
}
