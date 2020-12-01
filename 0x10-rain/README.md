<h1 class="gap">0x10. Rain</h1>

<h2 class="gap">Tasks</h2>

<section class="formatted-content">
            <div data-role="task3795" data-position="1">
              <div class=" clearfix gap" id="task-3795">
<span id="user_id" data-id="1283"></span>
</div>

  <h4 class="task">
    0. Rain
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
  </h4>

  <!-- Task Body -->
  <p>Given a list of non-negative integers representing walls of width 1, calculate how much water will be retained after it rains. </p>

<ul>
<li>Prototype: <code>def rain(walls)</code></li>
<li><code>walls</code> is a list of non-negative integers.</li>
<li>Return: Integer indicating total amount of rainwater retained.</li>
<li>Assume that the ends of the list (before index 0 and after index walls[-1]) are <strong>not</strong> walls, meaning they will not retain water.</li>
<li>If the list is empty return <code>0</code>.</li>
</ul>

<pre><code>jesse@ubuntu:~/0x10$ cat 0_main.py
#!/usr/bin/python3
"""
0_main
"""
rain = __import__('0-rain').rain

if __name__ == "__main__":
    walls = [0, 1, 0, 2, 0, 3, 0, 4]
    print(rain(walls))

jesse@ubuntu:~/0x10$ 
jesse@ubuntu:~/0x10$ ./0_main.py
6
jesse@ubuntu:~/0x10$ 
</code></pre>


</div>
</div>
</div>
</div>
