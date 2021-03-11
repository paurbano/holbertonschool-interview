<h1 class="gap">0x1B. Radix Sort</h1>

<h2>More Info</h2>
<p>For this project you are given the following <code>print_array</code> function:</p>
<pre><code>alexa@ubuntu-xenial:0x1B-radix_sort$ cat `print_array.c`
#include &lt;stdlib.h&gt;
#include &lt;stdio.h&gt;

/**
 * print_array - Prints an array of integers
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 */
void print_array(const int *array, size_t size)
{
    size_t i;

    i = 0;
    while (array &amp;&amp; i &lt; size)
    {
        if (i &gt; 0)
            printf(", ");
        printf("%d", array[i]);
        ++i;
    }
    printf("\n");
}
alexa@ubuntu-xenial:0x1B-radix_sort$
</code></pre>
<div data-role="task3660" data-position="38" id="task-num-0">
        <div class="panel panel-default task-card " id="task-3660">
  <span id="user_id" data-id="1283"></span>

  <div class="panel-heading">
    <h3 class="panel-title">
      0. Radix sort
    </h3>
  </div>

  <div class="panel-body">
    <span id="user_id" data-id="1283"></span>
<!-- Task Body -->
<p>Write a function that sorts an array of integers in ascending order using the <a href="/rltoken/EmCijZpZOLclVAf-ucPpQw" title="Radix sort" target="_blank">Radix sort</a> algorithm</p>

<ul>
<li>Prototype: <code>void radix_sort(int *array, size_t size);</code></li>
<li>You must implement the <code>LSD</code> radix sort algorithm</li>
<li>You can assume that <code>array</code> will contain only numbers <code>&gt;= 0</code></li>
<li>You are allowed to use <code>malloc</code> and <code>free</code> for this task</li>
<li>You’re expected to print the <code>array</code> each time you increase your <code>significant digit</code> (See example below)</li>
</ul>

<pre><code>alexa@ubuntu-xenial:0x1B-radix_sort$ cat 0-main.c
#include &lt;stdio.h&gt;
#include &lt;stdlib.h&gt;
#include "sort.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
    size_t n = sizeof(array) / sizeof(array[0]);

    print_array(array, n);
    printf("\n");
    radix_sort(array, n);
    printf("\n");
    print_array(array, n);
    return (0);
}
alexa@ubuntu-xenial:0x1B-radix_sort$ gcc -Wall -Wextra -Werror -pedantic 0-main.c 0-radix_sort.c print_array.c -o radix
alexa@ubuntu-xenial:0x1B-radix_sort$ ./radix
19, 48, 99, 71, 13, 52, 96, 73, 86, 7

71, 52, 13, 73, 96, 86, 7, 48, 19, 99
7, 13, 19, 48, 52, 71, 73, 86, 96, 99

7, 13, 19, 48, 52, 71, 73, 86, 96, 99
alexa@ubuntu-xenial:0x1B-radix_sort$
</code></pre>

  </div>

  <div class="list-group">
    <!-- Task URLs -->

<!-- Github information -->
<div class="list-group-item">
<p><strong>Repo:</strong></p>
<ul>
    <li>GitHub repository: <code>holbertonschool-interview</code></li>
    <li>Directory: <code>0x1B-radix_sort</code></li>
    <li>File: <code>0-radix_sort.c</code></li>
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