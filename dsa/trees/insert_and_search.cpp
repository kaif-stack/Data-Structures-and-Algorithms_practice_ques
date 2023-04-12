#include <bits/stdc++.h>
using namespace std;

#define ALPHABET_SIZE (26)
#define CHAR_TO_INDEX(c) ((int)c - (int)'a')

// trie node
struct TrieNode {
    struct TrieNode *children[ALPHABET_SIZE];

    // isLeaf is true if the node represents
    // end of a word
    bool isLeaf;
};

// Returns new trie node (initialized to NULLs)
struct TrieNode *getNode(void) {
    struct TrieNode *pNode = NULL;

    pNode = (struct TrieNode *) malloc(sizeof(struct TrieNode));

    if (pNode) {
        int i;

        pNode->isLeaf = false;

        for (i = 0; i < ALPHABET_SIZE; i++) pNode->children[i] = NULL;
    }

    return pNode;
}

void insert(struct TrieNode *, string);

bool search(struct TrieNode *, string);

// Driver
int main() {
    
        struct TrieNode *root = getNode();
        insert(root, "the");
        insert(root, "the");
        cout<<search(root, "th");

        return 0;
    }




void insert(struct TrieNode *root, string key)
{
    if(key.length() == 0) return;
    TrieNode *node = root;
    int l=key.length();
    for (int i = 0; i < l; i++)
    {
        if(root->children[CHAR_TO_INDEX(key[i])])
        {
            root = root->children[CHAR_TO_INDEX(key[i])];
            continue;
        }
        root->children[CHAR_TO_INDEX(key[i])] = new TrieNode();
        if(i==(l-1))continue;
        root = root->children[CHAR_TO_INDEX(key[i])];
    }
    root->isLeaf = true;
}

bool search(struct TrieNode *root, string key) 
{
    if(key.length() == 0) return true;
    TrieNode *node = root;
    for (int i = 0; i < key.length(); i++)
    {
        if(root->children[CHAR_TO_INDEX(key[i])]==NULL)
        {
            return false;
        }
        else
        {
            if(i==(key.length()-1))continue;
            root = root->children[CHAR_TO_INDEX(key[i])];
        }
    }
    if(root->isLeaf)
    {
        return true;
    }
    
}