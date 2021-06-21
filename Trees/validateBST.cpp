
bool isBST(Node *root, Node *&prev)
{
    if (root == nullptr)
        return true;
    if (!isBST(root->left, prev))
        return false;
    if (prev != nullptr && prev->data >= root->data)
        return false;
    prev = root;
    return isBST(root->right, prev);
}
bool checkBST(Node *root)
{
    Node *prev = nullptr;
    return isBST(root, prev);
}