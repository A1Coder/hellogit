#include "Employee.h"
#include <iostream>
#include <vector>
using namespace std;

int linearSearch(auto data, auto key);//prototype


int main() {
string search_key;
  int result;

	vector<Employee>v;
	Employee emp; 

	emp.setName("Cameron Cobham");
	emp.setHours(42);
	v.push_back(emp);



	emp.setName("Sheena Weekes");
	emp.setHours(22);
	v.push_back(emp);



	emp.setName("Fabain King");
	emp.setHours(30);
	v.push_back(emp);



	emp.setName("Keanna Jones");
	emp.setHours(40);
	v.push_back(emp);








 cout<<endl<<"To end input type the #-character (followed by Enter)"<<endl<<endl;
  cout<<"Enter Employee name to search: ";
#
	std::getline(cin, search_key); 
   
 
while(search_key != "#")//perform searches until sentinel entered
    {
		
        result = linearSearch(v,search_key);


        if (result == -1)
          cout<<"not found";
        else
          cout<< "Name: " << v[result].getName() << "  Hours Worked: " << v[result].getHours()<<endl;


        cout<<endl<<endl<<"Enter Employee name to search: ";
        	std::getline(cin, search_key); 
    }

   cout<<endl<<"Program \"search it\" is now finished."<<endl<<endl;

   
   

	


	return 0;
}


//implementation 
int linearSearch(auto data, auto key)
{
	
	for (int i = 0; i<data.size();i++)
	{
		if(data[i].getName()==key)
		{
			return i;

		}
	}
		return -1;
	}	

