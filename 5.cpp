
    #include <iostream>
	#include <vector> 
	#include <srand>
	 using namespace std;
	 
	 class Circle 
	{ 
	 private: 
	 int radius; 
	 
	 public: 
	 
	 Circle(int r) : radius(r) {} 
	 void add(const Circle& c) 
	 { 
	 	radius += c.radius; 
	 } 
	 
	 void addAll(vector<Circle> circles) 
	 { 
	  for (const Circle& c : circles) 
	 	{ 
		 radius += c.radius; 
		} 
	 } 
	 
	 vector<Circle> decompose() 
	 { 
	 	vector<Circle> result; 
	 	int remainingRadius = radius; 
	 	for (int i = 2; i <= remainingRadius; ++i) 
	  	{ 
	 		if (remainingRadius % i == 0) 
	 			{ 
					result.push_back(Circle(i)); 
	 	 			remainingRadius /= i; 
					i--; 
	 			} 
	  	} return result; 
	 } 
	 
	 int getRadius() const 
	 { 
	  return radius; 
	 }
	  
	}; 
	
	 int main() 
	 { 
	 vector<Circle> circles; 
	 for (int i = 1; i <= 100; i++) 
	 { 
	   circles.push_back(Circle(i)); 
	 } 
	 
	 Circle c(rand() % 991 + 10); // Generate a random circle with radius between 10 and 1000 
	 
	 
	 c.addAll(circles); 
	 
	 cout << "Final radius of circle c after adding 100 circles: " << c.getRadius() << endl; 
	 vector<Circle> decomposedCircles = c.decompose(); 
	 cout << "Decomposed circle c into " << decomposedCircles.size() << " circles:" << endl; 
	 for (const Circle& circle : decomposedCircles) 
	 	{ 
	      cout << "Circle with radius: " << circle.getRadius() << endl; 
	    } return 0; 
	 }
