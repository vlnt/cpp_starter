# cpp_starter

### How to get all this code stuff running.

##### To compile on Linux system do next:</br>

<code> >> cd \<directory> </code><br/>
<code> >> g++ main.cpp -o ./main </code></br>

##### If compiling more than one file, one should do linking.
##### For example:

<code> >> ls </code><br/>
<code> >> main.cpp  one.cpp  two.cpp </code>

##### To compile this project do next:

<code> >> g++ one.cpp -o one.o -c </code><br/>
<code> >> g++ two.cpp -o two.o -c </code><br/>

##### You will have two new files in the directory one.o and two.o,
##### then link  and compile them with main.cpp:

<code> >> g++ main.cpp one.o  two.o -o ./main </code>

###### If there is a [Makefile](https://www.gnu.org/software/make/manual/make.html) in the directory then simply execute the next command:

<code> >> make all </code>

