<html>
<h1 class="gap">0x0F. Star Wars API</h1>

<h2>More Info</h2>

<h3>Install Node 10</h3>
<pre><code>$ curl -sL https://deb.nodesource.com/setup_10.x | sudo -E bash -
$ sudo apt-get install -y nodejs
</code></pre>

<h3>Install semi-standard</h3>
<pre><code>$ sudo npm install semistandard --global
</code></pre>

<h3>Install <code>request</code> module and use it</h3>
<p><a href="/rltoken/-XDycLgGLJXzwsj9cZGFUw" title="Documentation" target="_blank">Documentation</a></p>
<pre><code>$ sudo npm install request --global
$ export NODE_PATH=/usr/lib/node_modules
</code></pre>

<h2 class="gap">Tasks</h2>
<div data-role="task3583" data-position="102">
              <div class=" clearfix gap" id="task-3583">
<span id="user_id" data-id="1283"></span>

    <div class="student_task_controls">

      <!-- button Done -->
        <button class="student_task_done btn btn-default no" data-task-id="3583">
          <span class="no"><i class="fa fa-square-o"></i></span>
          <span class="yes"><i class="fa fa-check-square-o"></i></span>
          <span class="pending"><i class="fa fa-spinner fa-pulse"></i></span>
          Done<span class="no pending">?</span><span class="yes">!</span>
        </button>
        <br>

      <!-- button Help! -->
      <button class="users_done_for_task btn btn-default btn-default" data-task-id="3583" data-project-id="470" data-toggle="modal" data-target="#task-3583-users-done-modal">
        Help
      </button>
      


    </div>

  <h4 class="task">
    0. Star Wars Characters
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
  </h4>

  

  <!-- Progress vs Score -->

  <!-- Task Body -->
  <p>Write a script that prints all characters of a Star Wars movie:</p>

<ul>
<li>The first positional argument passed is the Movie ID - example: <code>3</code> = “Return of the Jedi” </li>
<li>Display one character name per line <strong>in the same order as the “characters” list in the <code>/films/</code> endpoint</strong></li>
<li>You must use the <a href="/rltoken/aiMsg1QkH-FuPn7gyo9O6A" title="Star wars API" target="_blank">Star wars API</a></li>
<li>You must use the <code>request</code> module</li>
</ul>

<pre><code>alexa@ubuntu:~/0x0F$ ./0-starwars_characters.js 3
Luke Skywalker
C-3PO
R2-D2
Darth Vader
Leia Organa
Obi-Wan Kenobi
Chewbacca
Han Solo
Jabba Desilijic Tiure
Wedge Antilles
Yoda
Palpatine
Boba Fett
Lando Calrissian
Ackbar
Mon Mothma
Arvel Crynyd
Wicket Systri Warrick
Nien Nunb
Bib Fortuna
alexa@ubuntu:~/0x0F$ 
</code></pre>
./
</div>



</div>

</html>