<h1 class="gap">0x18. Merge Sort</h1>

<h2>More Info</h2>
<p>For this project you are given the following <code>print_array</code> function:</p>
<pre><code>alexa@ubuntu-xenial:0x18-merge_sort$ cat print_array.c
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
alexa@ubuntu-xenial:0x18-merge_sort$
</code></pre>
<ul>
<li>Our file <code>print_array.c</code> (containing the <code>print_array</code> function) will be compiled with your functions during the correction.</li>
<li>Please declare the prototype of the function <code>print_array</code> in your <code>sort.h</code> header file</li>
<li>Please, note this format is used for Big O notation:<br>

<ul>
<li><code>O(1)</code></li>
<li><code>O(n)</code></li>
<li><code>O(n!)</code></li>
<li>n square -&gt; <code>O(n^2)</code></li>
<li>log(n) -&gt; <code>O(log(n))</code></li>
<li>n * log(n) -&gt; <code>O(nlog(n))</code></li>
</ul></li>
</ul>

<h2 class="gap">Tasks</h2>

<section class="formatted-content">
            <div data-role="task3671" data-position="36">
              <div class=" clearfix gap" id="task-3671">
<span id="user_id" data-id="1283"></span>

</div>

</div>

  <h4 class="task">
    0. Merge sort
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
  </h4>

  

  <!-- Progress vs Score -->

  <!-- Task Body -->
  <p>Write a function that sorts an array of integers in ascending order using the <a href="/rltoken/ZvYviJcNKY01aZFOJNBHQg" title="Merge Sort" target="_blank">Merge Sort</a> algorithm:</p>

<ul>
<li>Prototype: <code>void merge_sort(int *array, size_t size);</code></li>
<li>You must implement the <code>top-down</code> merge sort algorithm

<ul>
<li>When you divide an array into two sub-arrays, the size of the left array should always be &lt;= the size of the right array. i.e. <code>{1, 2, 3, 4, 5}</code> -&gt; <code>{1, 2}, {3, 4, 5}</code></li>
<li> Sort the left array before the right array</li>
</ul></li>
<li>You are allowed to use <code>printf</code></li>
<li>You are allowed to use <code>malloc</code> and <code>free</code> only once (only one <strong>call</strong>)</li>
<li>Output: see example</li>
</ul>

<p>In the file <code>0-O</code>, write the Big O notations of the time complexity of the Merge Sort algorithm, with 1 notation per line:</p>

<ul>
<li>in the best case</li>
<li>in the average case</li>
<li>in the worst case</li>
</ul>

<pre><code>alexa@ubuntu-xenial:0x18-merge_sort$ cat 0-main.c
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
    merge_sort(array, n);
    printf("\n");
    print_array(array, n);
    return (0);
}
alexa@ubuntu-xenial:0x18-merge_sort$ gcc -Wall -Wextra -Werror -pedantic 0-main.c 0-merge_sort.c print_array.c -o merge
alexa@ubuntu-xenial:0x18-merge_sort$ ./merge
19, 48, 99, 71, 13, 52, 96, 73, 86, 7

Merging...
[left]: 19
[right]: 48
[Done]: 19, 48
Merging...
[left]: 71
[right]: 13
[Done]: 13, 71
Merging...
[left]: 99
[right]: 13, 71
[Done]: 13, 71, 99
Merging...
[left]: 19, 48
[right]: 13, 71, 99
[Done]: 13, 19, 48, 71, 99
Merging...
[left]: 52
[right]: 96
[Done]: 52, 96
Merging...
[left]: 86
[right]: 7
[Done]: 7, 86
Merging...
[left]: 73
[right]: 7, 86
[Done]: 7, 73, 86
Merging...
[left]: 52, 96
[right]: 7, 73, 86
[Done]: 7, 52, 73, 86, 96
Merging...
[left]: 13, 19, 48, 71, 99
[right]: 7, 52, 73, 86, 96
[Done]: 7, 13, 19, 48, 52, 71, 73, 86, 96, 99

7, 13, 19, 48, 52, 71, 73, 86, 96, 99
alexa@ubuntu-xenial:0x18-merge_sort$
</code></pre>


 <!-- Task URLs -->

  <!-- Github information -->
<p class="sm-gap"><strong>Repo:</strong></p>
<ul>
    <li>GitHub repository: <code>holbertonschool-interview</code></li>
    <li>Directory: <code>0x18-merge_sort</code></li>
    <li>File: <code>0-merge_sort.c, 0-O</code></li>
</ul>

</div>

</div>



<!-- Button containers -->

<!-- Button for QA Review -->
</div>

</div>

</div>
</section>