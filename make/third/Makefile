
# can be accessed by 'make' or 'make all' commands from root folder
all: hello
	
hello: main.o function1.o function2.o
	g++ main.o function1.o function2.o -o make_app
	
main.o: main.cpp
	g++ -c main.cpp
		
function1.o: function1.cpp
	g++ -c function1.cpp

function2.o: function2.cpp
	g++ -c function2.cpp

# it removes all .o files and make_app file
clean:
	rm -rf *o make_app

#<rule>: <dependency>
#		<commands>	
