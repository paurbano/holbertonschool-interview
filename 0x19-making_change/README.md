<h1 class="gap">0x19. Making Change</h1>

<h2 class="gap">Tasks</h2>

<div data-role="task3726" data-position="1">
        <div class="panel panel-default task-card " id="task-3726">
  <span id="user_id" data-id="1283"></span>

  <div class="panel-heading">
    <h3 class="panel-title">
      0. Change comes from within
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

    <!-- Task Body -->
    <p>Given a pile of coins of different values, determine the fewest number of coins needed to meet a given amount <code>total</code>.</p>

<ul>
<li>Prototype: <code>def makeChange(coins, total)</code></li>
<li>Return: fewest number of coins needed to meet <code>total</code>

<ul>
<li>If <code>total</code> is <code>0</code> or less, return <code>0</code></li>
<li>If <code>total</code> cannot be met by any number of coins you have, return <code>-1</code></li>
</ul></li>
<li><code>coins</code> is a list of the values of the coins in your possession</li>
<li>The value of a coin will always be an integer greater than <code>0</code></li>
<li>You can assume you have an infinite number of each denomination of coin in the list</li>
<li>Your solution’s runtime will be evaluated in this task</li>
</ul>

<pre><code>carrie@ubuntu:~/0x19-making_change$ cat 0-main.py
#!/usr/bin/python3
"""
Main file for testing
"""

makeChange = __import__('0-making_change').makeChange

print(makeChange([1, 2, 25], 37))

print(makeChange([1256, 54, 48, 16, 102], 1453))

carrie@ubuntu:~/0x19-making_change$
</code></pre>

<pre><code>carrie@ubuntu:~/0x19-making_change$ ./0-main.py
7
-1
carrie@ubuntu:~/0x19-making_change$
</code></pre>

  </div>

<div class="list-group">
<!-- Task URLs -->

<!-- Github information -->
<div class="list-group-item">
<p><strong>Repo:</strong></p>
<ul>
    <li>GitHub repository: <code>holbertonschool-interview</code></li>
    <li>Directory: <code>0x19-making_change</code></li>
    <li>File: <code>0-making_change.py</code></li>
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