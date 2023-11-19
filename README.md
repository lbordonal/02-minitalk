<p align="center">
  <img src="https://github.com/lbordonal/lbordonal/blob/main/.titles/minitalk.png">
</p>

<p align="center">
	<img src="https://img.shields.io/badge/score-125%20%2F%20100%20%E2%98%85-9cf?style=flat-square" />
	<img src="https://img.shields.io/github/languages/code-size/lbordonal/02-minitalk?style=flat-square" />
	<img src="https://img.shields.io/github/languages/count/lbordonal/02-minitalk?style=flat-square" />
	<img src="https://img.shields.io/github/languages/top/lbordonal/02-minitalk?style=flat-square" />
	<img src="https://img.shields.io/github/last-commit/lbordonal/02-minitalk?style=flat-square" />
</p>

<p align="center">
This repository contains code developed at 42 Porto for minitalk Project, from 08/12/2022 to 30/12/2022.
</p>

<img src="https://github.com/lbordonal/lbordonal/blob/main/.42_badges/minitalkm.png" align="right" />
<h2>
	 :notebook: Subject
</h2>
<a href="https://github.com/lbordonal/02-minitalk/blob/main/Subject/en.subject.pdf">Click here</a> for the subject of this project.
<br /><br />

<h2 align="left">
	:computer: Usage
</h2>
1- Clone this repository: </br>
<code>git clone https://github.com/lbordonal/02-minitalk.git</code> </br></br>

2- Navigate to minitalk folder: </br>
<code>cd 02-minitalk/minitalk/</code><br /><br />

3- Run with make or make bonus: </br>
<code>make</code> or <code>make bonus</code><br /><br />

4- Start the server to get his PID with: </br>
<code>./server</code> or <code>./server_bonus</code><br /><br />

5- Start the client and send message with: </br>
<code>./client [PID] [Message]</code> or <code>./client_bonus [PID] [Message]</code><br /><br />

<h2 align="left">
	:medal_sports: Mandatory Part
</h2>

**`client.c`**

* `check_input`		- check if the input is valid.
* `send_msg`		- convert the message char by char to binary and send the signal to the server.</br></br>


**`server.c`**

* `print_msg`		- convert the binary signal received from client and print the message.</br></br>

**`minitalk.h`**</br></br>
[**`Libft library`**](https://github.com/lbordonal/00-Libft)

<br /><br />

<h2 align="left">
	:trophy: Bonus Part
</h2>

**`client_bonus.c`**

* `check_input`		- check if the input is valid.
* `send_msg`		- convert the message char by char to binary and send the signal to the server_bonus.
* `send_null`		- convert the <code>'\0'</code> to binary and send the signal to the server_bonus.
* `handler_sig`		- receive the signal from server_bonus and print the confirmation. </br></br>

**`server_bonus.c`**

* `handler_sig`		- convert the binary signal received from client_bonus, print the message, and send confirmation to client_bonus.</br></br>

**`minitalk.h`**</br></br>
[**`Libft library`**](https://github.com/lbordonal/00-Libft)

<br />
<br />
<hr/>
<p align="center">
This work is published under the terms of <a href="https://github.com/gcamerli/42unlicense">42 Unlicense</a>.
</p>
