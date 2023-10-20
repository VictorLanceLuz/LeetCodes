/*
 * @lc app=leetcode id=94 lang=c
 *
 * [94] Binary Tree Inorder Traversal
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* inorderTraversal(struct TreeNode* root, int* returnSize){

    // Sizeof(int) gives 4 bytes. 
    int *ans = (int*) malloc(100 * sizeof(int)); 
    *returnSize = 0;
    struct TreeNode **stack;
    stack = malloc(100 * sizeof(struct TreeNode*));
    int top = 0;
    

    while (top || root)
    {
        if (root)
        {
            stack[top++] = root;
            root = root->left;
        }

        else
        {
            root = stack[--top];
            ans[(*returnSize)++] = root->val;
            root = root->right;
        }
                
    }
    free(stack);

    



    // Re-allocate memory. 
    ans = realloc(ans, (*returnSize) * sizeof(int)); 
    return ans;
}
// @lc code=end

