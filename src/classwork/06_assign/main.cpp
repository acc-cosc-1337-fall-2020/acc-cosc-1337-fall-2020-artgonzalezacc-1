#include<iostream>
#include<fstream>
#include<string>

int main()
{
  std::ofstream out_file;

  std::cout<<"Open file: \n";
  out_file.open("names.dat");

  out_file<<"joe"<<std::endl;
  out_file<<"mary"<<std::endl;
  out_file<<"john"<<std::endl;
  
  std::cout<<"Close file\n";
  
  //READ FILE
  
  std::ifstream in_file;
  std::cout<<"\n open file\n\n";
  in_file.open("names.dat");

  std::string name;
  std::cout<<"Names";
  
  if(in_file.is_open())
  {
    std::cout<<"read: ";
    while(std::getline(in_file, name))
    {
      std::cout<<"name: "<<name<<"\n";
    }
        
  }
  
  
  

  in_file.close();
	
	return 0;
}