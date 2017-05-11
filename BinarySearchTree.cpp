#include<iostream>
using namespace std;

template<typename T>
// 树节点结构
class BSTNode{
public:
	T _key;
	BSTNode* _lchild;
	BSTNode* _rchild;
	BSTNode* _parent;

public:
	BSTNode(T key, BSTNode *lchild, BSTNode *rchild, BSTNode *parent):
	_key(key),_lchild(lchild),_rchild(rchild),_parent(parent){};
};

/// http://www.cnblogs.com/QG-whz/p/4536875.html
