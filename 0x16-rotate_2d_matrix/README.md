<h1 class="gap">0x16. Rotate 2D Matrix</h1>

<h2 class="gap">Tasks</h2>

<section class="formatted-content">
            <div data-role="task3796" data-position="1">
              <div class=" clearfix gap" id="task-3796">
<span id="user_id" data-id="1283"></span>
</div>

</div>

  <h4 class="task">
    0. Rotate 2D Matrix
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
  </h4>

  <!-- Progress vs Score -->

  <!-- Task Body -->
  <p>Given an <code>n</code> x <code>n</code> 2D matrix, rotate it 90 degrees clockwise.</p>

<ul>
<li>Prototype: <code>def rotate_2d_matrix(matrix):</code></li>
<li>Do not return anything. The matrix must be edited <strong>in-place</strong>.</li>
<li>You can assume the matrix will have 2 dimensions and will not be empty.</li>
</ul>

<pre><code>jessevhedden$ cat main_0.py
#!/usr/bin/python3
"""
Test 0x16 - Rotate 2D Matrix
"""
rotate_2d_matrix = __import__('0-rotate_2d_matrix').rotate_2d_matrix

if __name__ == "__main__":
    matrix = [[1, 2, 3],
              [4, 5, 6],
              [7, 8, 9]]

    rotate_2d_matrix(matrix)
    print(matrix)

jessevhedden$
jessevhedden$ ./main_0.py
[[7, 4, 1],
[8, 5, 2],
[9, 6, 3]]
jessevhedden$
</code></pre>


  <!-- Task URLs -->

  <!-- Github information -->
<p class="sm-gap"><strong>Repo:</strong></p>
<ul>
    <li>GitHub repository: <code>holbertonschool-interview</code></li>
    <li>Directory: <code>0x16-rotate_2d_matrix</code></li>
    <li>File: <code>0-rotate_2d_matrix.py</code></li>
</ul>
</div>
 
</div>
</section>