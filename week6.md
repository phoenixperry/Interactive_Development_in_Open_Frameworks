#Week 6 

Topics: Listeners, pointers and Lerping. 

###Using Arduino with listeners. 
So far we have used Arduino in an inefficient way. This method has been depreciated in the offical Arduino spec and we are going to update to the proper way to implement the code today. 

This requires 2 things: 
	
* Listners 

	We are going to listen in our code to for the arduino to make a connection with open frameworks. We have been using listeners since the first day of class. Listeners are checks to see if an event has occured within our application. Some of the post common are key pressed and mouse clicks. Open Frameworks establishes them for you behind the scenes and fires the functions for each event appropriately. 
			