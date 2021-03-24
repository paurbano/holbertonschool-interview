<h1 class="gap">0x1D. AVL Trees</h1>
<h2>More Info</h2>
<h3>Data structures</h3>
<p>Please use the following data structures and types for binary trees. Don’t forget to include them in your header file.</p>

<h4>Basic Binary Tree</h4>
<pre><code>/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;
</code></pre>

<h4>AVL Tree</h4>
<pre><code>typedef struct binary_tree_s avl_t;</code></pre>

<h3>Print function</h3>
<p>To match the examples in the tasks, you are given <a href="https://github.com/holbertonschool/0x1C.c" title="this function" target="_blank">this function</a>.</p>
<p>This function is used only for visualization purposes. You don’t have to push it to your repo. It may not be used during the correction.</p>

<h2 class="gap">Tasks</h2>
<div data-role="task3674" data-position="31" id="task-num-0">
        <div class="panel panel-default task-card " id="task-3674">
  <span id="user_id" data-id="1283"></span>

  <div class="panel-heading">
    <h3 class="panel-title">
      0. Is AVL
    </h3>
  </div>

  <div class="panel-body">
    <span id="user_id" data-id="1283"></span>

    

<!-- Progress vs Score -->

<!-- Task Body -->
<p>Write a function that checks if a binary tree is a valid <a href="/rltoken/6g6I1RrURewjvM4xxnDOWQ" title="AVL Tree" target="_blank">AVL Tree</a></p>

<ul>
<li>Prototype: <code>int binary_tree_is_avl(const binary_tree_t *tree);</code></li>
<li>Where <code>tree</code> is a pointer to the root node of the tree to check</li>
<li>Your function must return <code>1</code> if <code>tree</code> is a valid AVL Tree, and <code>0</code> otherwise</li>
<li>If <code>tree</code> is <code>NULL</code>, return <code>0</code></li>
</ul>

<p>Properties of an AVL Tree:</p>

<ul>
<li>An AVL Tree is a BST</li>
<li>The difference between heights of left and right subtrees cannot be more than one</li>
<li>The left and right subtree each must also be a binary search tree</li>
</ul>

<p>Note: In order for the main file to compile, you are provided with <a href="https://s3.amazonaws.com/intranet-projects-files/interviews/484/libavl.a" title="this static library" target="_blank">this static library</a>. This library won’t be used during correction, its only purpose is for testing.</p>

<pre><code>alex@/tmp/binary_trees$ cat 0-main.c
#include &lt;stdlib.h&gt;
#include &lt;stdio.h&gt;
#include "binary_trees.h"

/**
 * basic_tree - Build a basic binary tree
 *
 * Return: A pointer to the created tree
 */
binary_tree_t *basic_tree(void)
{
    binary_tree_t *root;

    root = binary_tree_node(NULL, 98);
    root-&gt;left = binary_tree_node(root, 12);
    root-&gt;right = binary_tree_node(root, 128);
    root-&gt;left-&gt;right = binary_tree_node(root-&gt;left, 54);
    root-&gt;right-&gt;right = binary_tree_node(root, 402);
    root-&gt;left-&gt;left = binary_tree_node(root-&gt;left, 10);
    return (root);
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    binary_tree_t *root;
    int avl;

    root = basic_tree();

    binary_tree_print(root);
    avl = binary_tree_is_avl(root);
    printf("Is %d avl: %d\n", root-&gt;n, avl);
    avl = binary_tree_is_avl(root-&gt;left);
    printf("Is %d avl: %d\n", root-&gt;left-&gt;n, avl);

    root-&gt;right-&gt;left = binary_tree_node(root-&gt;right, 97);
    binary_tree_print(root);
    avl = binary_tree_is_avl(root);
    printf("Is %d avl: %d\n", root-&gt;n, avl);

    root = basic_tree();
    root-&gt;right-&gt;right-&gt;right = binary_tree_node(root-&gt;right-&gt;right, 430);
    binary_tree_print(root);
    avl = binary_tree_is_avl(root);
    printf("Is %d avl: %d\n", root-&gt;n, avl);

    root-&gt;right-&gt;right-&gt;right-&gt;left = binary_tree_node(root-&gt;right-&gt;right-&gt;right, 420);
    binary_tree_print(root);
    avl = binary_tree_is_avl(root);
    printf("Is %d avl: %d\n", root-&gt;n, avl);
    return (0);
}
alex@/tmp/binary_trees$ gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 0-main.c 0-binary_tree_is_avl.c -L. -lavl -o 0-is_avl
alex@/tmp/binary_trees$ ./0-is_avl
       .-------(098)--.
  .--(012)--.       (128)--.
(010)     (054)          (402)
Is 98 avl: 1
Is 12 avl: 1
       .-------(098)-------.
  .--(012)--.         .--(128)--.
(010)     (054)     (097)     (402)
Is 98 avl: 0
       .-------(098)--.
  .--(012)--.       (128)--.
(010)     (054)          (402)--.
                              (430)
Is 98 avl: 0
       .-------(098)--.
  .--(012)--.       (128)--.
(010)     (054)          (402)-------.
                                .--(430)
                              (420)
Is 98 avl: 0
alex@/tmp/binary_trees$
</code></pre>

  </div>

  <div class="list-group">
<!-- Task URLs -->

<!-- Github information -->
<div class="list-group-item">
<p><strong>Repo:</strong></p>
<ul>
    <li>GitHub repository: <code>holbertonschool-interview</code></li>
    <li>Directory: <code>0x1D-avl_trees</code></li>
    <li>File: <code>0-binary_tree_is_avl.c</code></li>
</ul>
</div>
</div>
<div class="panel-footer">
<div>
</div>
</div>
</div>
</div>
</div>
</div>

</div>
