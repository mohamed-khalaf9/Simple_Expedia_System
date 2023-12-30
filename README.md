
# Simple Expedia System


This marks the inception of my Expedia system implementation project. The goal is to clone Expedia website features, aiming to gain practical experience and delve into real-world projects. The system, currently a console application written in C++, incorporates key Object-Oriented Programming (OOP) concepts, follows the Model-View-Controller (MVC) pattern, and employs the Factory Method pattern.

I've chosen to interact with local APIs for a hands-on understanding of API usage. The system is designed to interact with these APIs through an interface rather than direct depedency . I've also utilized a JSON API to understand JSON usage in C++. The focus has been on design and optimization to ensure efficiency and modularity.
So the Journey of this project starts from this implementation and it will ends with real world website as I will learn more advanced tobis and modern technologies .


## Features

- The system has two types of users but the focus now on Customer users
-  Simple start Menu (signup and login) For customers
- Customer User Prespective :
  - View Profile : this feature displays all information about the customer Name,Email And Username.
  - Make Itinerary : this feature allows customer to create Itinerary through this menu :
      - Add Flight :  From here the system request from user some info about the flight reservation (from date, from , to date, to , number of childrens , adults and infants )then display all available flights but for now the flights are dummy data because I have used local APIs,after this the custtomer choose  the proper flight .
      - Add Hotel : From here the system request from user some info about the start data to check in ,the date of the check out , number of persons, country and city ,then display all available hotel rooms but for now the rooms info are dummy data because I have used local APIs. after this the customer choose the proper room .
      - Done : This feature ask customer do add payments card information then he can choose payment card to pay .finally  the itinerary reservation will be confirmed .
      - Cancel : To Cancel the itinerary reservation and back to the previous menu . 
  - List itineraries: This feature list all itineraries with its all reservations info and the total cost for each itinerary .
  - Logout : This feature Allows customer to logout from his account and back to the start menu .
# UML (Class Diagram) : 
 in progress.............................
# Demo : 
LinkedIn post : 
https://www.linkedin.com/posts/mohamed-khalafcs111_softwaredevelopment-github-opensource-activity-7146501823724511233-7T9Y?utm_source=share&utm_medium=member_android