#ifndef DATA_STRUCTURE_H_
#define DATA_STRUCTURE_H_

#include <iostream>
#include <vector>
#include <map>
#include <list>
#include <queue>
#include <stack>
#include <algorithm>
#include "common_base.h"

using namespace std;

_NAMESPACE_COMMONLIB_START

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};


struct Node {
    int key;
    int value;
    Node(int k , int v):key(k),value(v){}
};


struct ListNode {
    int val;
    struct ListNode *next;
};

class CommonMethod
{
    public:
        static TreeNode * getSampleTree();
        static ListNode * getSampleLinkList();
        static vector<int> getSampleVector();
        static void randomShuffle(vector<int> &p);
        static bool checkOrder(const vector<int> &p);
};

_NAMESPACE_COMMONLIB_END

#endif
