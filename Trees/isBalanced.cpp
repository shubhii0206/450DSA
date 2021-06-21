{
    if (root == nullptr)
        return 0;
    int r = height(root->right);
    int l = height(root->left);
    return max(r, l) + 1;
}
bool isBalanced(Node *root)
{
    if (root == nullptr)
        return true;
    if (abs(height(root->right) - height(root->left)) > 1)
        return false;

    bool r = isBalanced(root->right);
    bool l = isBalanced(root->left);

    return r && l;
}