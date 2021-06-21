//https: //www.hackerrank.com/challenges/tree-top-view/problem

void topView(Node *root)
{
    if (root == nullptr)
        return;
    map<int, int> mp;
    queue<pair<Node *, int>> q;

    q.push(make_pair(root, 0));

    while (!q.empty())
    {
        pair<Node *, int> p = q.front();
        q.pop();
        Node *node = p.first;
        int hd = p.second;

        if (mp.find(hd) == mp.end())
        {
            mp[hd] = node->data;
            //cout<<node->data<<" ";
        }

        if (node->left != nullptr)
        {
            q.push(make_pair(node->left, hd - 1));
        }

        if (node->right != nullptr)
        {
            q.push(make_pair(node->right, hd + 1));
        }
    }

    for (auto it = mp.begin(); it != mp.end(); it++)
        cout << it->second << " ";
}