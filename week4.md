#Week 4 
Data collections + references  

## Your homework: 
*Due this Friday by 23:59*

Write a small two-player text game where the first player enters a list of 5things or people they love most, and the second player tries to guess whatthose things are.• Function 1: Greets the players and prints a description of how to play.• Function 2: Prompts user input for 5 different things or people, thenreceives that input and saves it in an array (or vector, if you want the playerto choose how many things they enter). *try figuring out how to hide theplayer’s input in your console, or just print a bunch of spaces to hide it!• Function 3: Prompt player to guess! Pass that array or vector as a referenceto a function that will check through the list for matches each time thesecond player guesses.

This is a basic outline of an exercise in functions and references, but feel free tobe as creative with the gameplay as you want! Even add graphics if you want. 

To read a value in from the console you can simply do this: 

		string thing1; 
		thing 1 = cin >> aValueFromTheUserInTheConsole; 
		
###Your midterm. Please reference the syllabus outline for what I expect to see on Thursday. 

![](images/monday.jpg)


###Data Collection
A data collection in programming is a programming construct. The idea is that the object you are using is capable of holding multiple variables within it. There are all kinds of data collection. The 2 we are going to talk about today are Arrays and Vectors 


####Arrays are dumb 
In c++, arrays are very small but *very* dumb. An array is a list of elements in order. The size of an array in C++ is fixed, which means you cannot change it after it is created. All elements in it must be of the same data type. 
*Hint: remember a data type is the type of information a variable holds* 

You use the subscript operator [] to indicate you are making an array 

When should you use an array? Anytime you have a group of objects that are conceptually linked. 

		int score1; 
		int score2;
		int score3; 

[break to do something fun!] 
To contain these ints into a single object together simply use an array. 


			int scores[2];
Because the size of array can not change the value of an array index must be a constant. 

	const int arrayIndex = 9; 
	int scores[arrayIndex];
		

In c++ you indicate a constant value using the keyword const.  


Just like in Processing arrays start counting at 0. So an array with 9 elements holds 10 variables. 

In the above code the number of elements in array is referred to as its index. The array above has an index of 10. 

You can access and assign elements in the array using the array's index. 

		scores[1] = 10; 
	
Or you can do it all one go using an initialiser list : 

	int anArray[5] = { 3, 2, 7, 5, 8 };
	

Arrays in c++ do no bounds checking. As a result, I avoid them like the plague. They are ok for very simple things like lists of numbers but for other things, just a vector. What's bounds checking? It's when your compiler will check to make sure nowhere in your code are you outside the size of your array. Your application will rage quit if it hits an array that is out of bounds when it is running. 

Arrays must always be set to constant values. You can either set them to be the size of a number or a constant integer. 
 
To make a value that will never change use the keyword const 

        const int x =10; 
        int myArray[x] = {1,2,3}; 

###Vectors
Vectors are much closer to the arrays you are used to from processing. 

A vector is a flexible data structure, which means you can expand and contract it at will. 

This is how they are created: 

	 vector<string>  inventory;
	 
You can then elements to them like this: 

    inventory.push_back("sword");
    inventory.push_back("armor");
    inventory.push_back("shield");

And remove elements: 

	inventory.pop_back;  //removes the last element added to the vector 	

More cool Vector things: 

	inventory.size(); //tells you how large it is! 
	inventory.at(index);


### Structs

Structs are handy little data structures for grouping variables together: 

You define a custom data type and associate varriables with it inside scope operators. 

	struct Circle {
    	int x = 0;
    	int y = 10;
    	int width = 10;
    	int height = 10;
	};
 
You can create instances of them 

	  	Circle c;
	  	
And access the variables using the dot operator

		int i = 10; 
        c.x = 10*i;
        c.y = 10 * i;
        c.width = 10*i;
        c.height = 10*i;

Then you can add them to a vector by simply creating a vector of the data type of the struct!  


 	  vector<Circle> myCircles;
  

### References 
In C++ you deal directly with your computer's memory. 


3 cases that you have to deal directly with the memory 

	1. creating objects 
	2. deleting objects 
	3. finding where objects are at to use them in your code. 
	
We are going into great detail with this in the coming week but this week we are going to look at references. They are basically shortcuts on your desktop. (In fact, that's what those alises really are.) They are easy shortcuts to something else somewhere else. It doesn't hold any values, just an address in memory. 

Try this code on your own: 
		int myValue; 
		//creates an int called myValue
		int &refToMyValue; 
		//creates a reference called refToMyValue. The & symbol is what tells c++ you're making a reference to a place in memory. 
		
		void ofApp::setup(){
			myValue = 10; 
			//assigning a default value to myValue; 
			refToMyValue = myValue; 
			//make the reference point to the variable myValue
			passByValue(refToMyValue); 
			//call the passByValue function and pass the reference into it. 
		}
		
		//let the function know it will be receiving a reference as a parameter. 
        void ofApp::passByValue(int &x)
        {
       	 	x=x+10;
       	 	//add 10 
       	 	
        	cout << &x << " is the address in memory where the value passed into this function lives\n" << x << " is the value of x " <<endl;
        	//print out where in memeory the reference is looking and the value of what it is looking at. 
        
        }
        

        

References can be reassigned to point at any value once you make them. They don't have to be fixed to one varaible. 
For example: 
		int x = 10;
		int y =12; 
		int &ref = x; 
		cout << ref; 
		ref = y; 
		cout << y; 
		

If you really want to make the always point at the same place you can do this with a constant reference. 

		const int& x = 10; 
		
#####This brings us to a bigger issue which is passing by value or passing by reference. 
When you pass by value you make a copy of what you are passing. 
When you pass by reference you send the thing itself into a function or object. 
Let's take example of making copies of an exam. When I use a copy machine, I make 20 copies. Then I number all of the exams and hand them out to make sure that no copies leave the room. Then I hand out the exams and make a note which student has which exam. Copying the exam is a pass by value. The processing of making a reference of each exam to each student gives me a way to make sure I retrieve exam 3 from Betsy for example. 

Hope that makes more sense. We will talk about it more next week but those are the basics!

 
######*Side note:* this week we also looked at making c++ apps outside of oF by just making console apps. 
Someone asked about what the main function did so here you go in detail! 
Side Note: main(int argc, char *argv[])....??• main looks like a function, but what are these two parameters? Inother words, who's calling main?
• The parameterss hold data that can be passed in at the start ofexecution (when you hit Run in Xcode)• argc: argument count• argv: argument values• Most commonly used when running code outside ofXcode (by using... the terminal D: )• Example of providing arguments to main() via terminal:• You can specify these arguments (“command line arguments”) in anXcode menu./a.out coding_is_fun //you type this into terminal!!Then, this stuff happens under the hood:!
        argc = 2 // counts # of strings in argv array!        { 
        	“./a.out”, “coding_is_fun”
        } 
        //contents of argv!



Extra credit for Mac people:

Dowloand the xcode add ons plugin 
http://forum.openframeworks.cc/t/ofplugin-xcode-plugin-for-easily-adding-addons-to-of-apps/13667

