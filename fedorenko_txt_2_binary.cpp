#include <iostream>
#include <fstream>

using namespace std;

int main()
{
   string path;
   cout<< "Enter the path of file";
   cin >> path;
   std::ifstream in(path);
   std::ofstream out("new.bin", std::ios::binary);
   double d;
   while(in >> d)
   {
      out.write((char*)&d, sizeof d);
   }
}