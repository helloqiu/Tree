#ifndef TREE_H
#define TREE_H


class Tree
{
    public:
        Tree(int nu);
        void append(Tree* tree);
        int _count();
        virtual ~Tree();
        Tree* getparent();
        int getnum();
    protected:
    private:
        Tree* parent;
        Tree* child[10];
        int num;
        int child_num;
};

#endif // TREE_H
