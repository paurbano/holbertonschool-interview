<h1 class="gap">0x1A. Double Circular Linked List</h1>

<h2>More Info</h2>
<p>Please use this data structure for this project:</p>
<pre><code>/**
 * struct List - doubly linked list
 * @str: string - (malloc'ed string)
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 * for Holberton project
 */
typedef struct List
{
  char *str;
  struct List *prev;
  struct List *next;
} List;
</code></pre>
<h2 class="gap">Tasks</h2>
<div data-role="task3659" data-position="5" id="task-num-0">
        <div class="panel panel-default task-card " id="task-3659">
  <span id="user_id" data-id="1283"></span>

  <div class="panel-heading">
    <h3 class="panel-title">
      0. Add Nodes
    </h3>

    <div>
        <span class="label label-warning">
          mandatory
        </span>
    </div>
  </div>

  <div class="panel-body">
    <span id="user_id" data-id="1283"></span>

    

    <!-- Progress vs Score -->
      <div class="task_progress_score_bar" data-task-id="3659" data-correction-id="185485">
        <div class="task_progress_bar" style="width: 0%;">
          <div class="task_score_bar">
          </div>
        </div>
        <div class="task_progress_score_text">
          Score: <span class="task_score_value">0.00%</span> (<span class="task_progress_value">Checks completed: 0.00%</span>)
        </div>
      </div>

    <!-- Task Body -->
    <p>Create the source file <code>0-add_node.c</code> that contains the following functions:</p>

<ul>
<li>Add a new node  to <strong>the end</strong> of a double circular linked list:

<ul>
<li>Prototype: <code>List *add_node_end(List **list, char *str);</code></li>
<li><code>List</code>: the list to modify

<ul>
<li><code>str</code>: the string to copy into the new node</li>
<li>Returns: Address of the new node, or <code>NULL</code> on failure</li>
</ul></li>
</ul></li>
<li>Add a new node to <strong>the beginning</strong> of a double circular linked list:

<ul>
<li>Prototype: <code>List *add_node_begin(List **list, char *str);</code></li>
<li><code>List</code>: the list to modify

<ul>
<li><code>str</code>: the string to copy into the new node</li>
<li>Returns: Address of the new node, or <code>NULL</code> on failure</li>
</ul></li>
</ul></li>
</ul>

<pre><code>alexa@ubuntu:0x1A-double_circular_linked_list$ cat 0-main.c 
#include &lt;stdio.h&gt;
#include &lt;stdlib.h&gt;
#include "list.h"

/**
 * print_list - Print informations about each element of a list
 *
 * @list: A pointer to the head of the linkd list
 *
 * Return: void
 */
void print_list(List *list)
{
    List *tmp;

    tmp = list;
    while (tmp)
    {
        printf("%s\n", tmp-&gt;str);
        printf("\t-&gt;prev: %s\n", tmp-&gt;prev ? tmp-&gt;prev-&gt;str : "NULL");
        printf("\t-&gt;next: %s\n", tmp-&gt;next ? tmp-&gt;next-&gt;str : "NULL");
        tmp = tmp-&gt;next;
        if (tmp == list)
            break;
    }
}

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    List *list;

    list = NULL;
    add_node_end(&amp;list, "Holberton");
    add_node_end(&amp;list, "School");
    add_node_end(&amp;list, "Full");
    add_node_end(&amp;list, "Stack");
    add_node_end(&amp;list, "Engineer");

    printf("Added to the end:\n");
    print_list(list);
    list = NULL;
    add_node_begin(&amp;list, "Holberton");
    add_node_begin(&amp;list, "School");
    add_node_begin(&amp;list, "Full");
    add_node_begin(&amp;list, "Stack");
    add_node_begin(&amp;list, "Engineer");

    printf("Added to the beginning:\n");
    print_list(list);
    return (0);
}
alexa@ubuntu:0x1A-double_circular_linked_list$ gcc -Wall -Wextra -Werror -pedantic 0-main.c 0-add_node.c
alexa@ubuntu:0x1A-double_circular_linked_list$ ./a.out 
Holberton
        -&gt;prev: Engineer
        -&gt;next: School
School
        -&gt;prev: Holberton
        -&gt;next: Full
Full
        -&gt;prev: School
        -&gt;next: Stack
Stack
        -&gt;prev: Full
        -&gt;next: Engineer
Engineer
        -&gt;prev: Stack
        -&gt;next: Holberton
Added to the beginning:
Engineer
        -&gt;prev: Holberton
        -&gt;next: Stack
Stack
        -&gt;prev: Engineer
        -&gt;next: Full
Full
        -&gt;prev: Stack
        -&gt;next: School
School
        -&gt;prev: Full
        -&gt;next: Holberton
Holberton
        -&gt;prev: School
        -&gt;next: Engineer
alexa@ubuntu:0x1A-double_circular_linked_list$ 
</code></pre>

</div>

<div class="list-group">
<!-- Task URLs -->

<!-- Github information -->
<div class="list-group-item">
<p><strong>Repo:</strong></p>
<ul>
    <li>GitHub repository: <code>holbertonschool-interview</code></li>
    <li>Directory: <code>0x1A-double_circular_linked_list</code></li>
    <li>File: <code>0-add_node.c</code></li>
</ul>
</div>
</div>

<div class="panel-footer">
</div>
</div>
</div>
</div>
</div>
</div>

</div>