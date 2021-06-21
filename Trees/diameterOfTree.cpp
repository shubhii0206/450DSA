//practice.geeksforgeeks.org/problems/diameter-of-binary-tree/1#
        int
        height(struct Node *root)
{
    if (root == NULL)
        return 0;

    int r = height(root->right);
    int l = height(root->left);
    return max(l, r) + 1;
}
int diameter(struct Node *root)
{

    if (root == NULL)
        return 0;
    int r = height(root->right);
    int l = height(root->left);
    int r_diameter = diameter(root->right);
    int l_diameter = diameter(root->left);

    return max(r + l + 1, max(l_diameter, r_diameter));
    // code here
}