#include <string>
#include <iostream>
#include <boost/filesystem.hpp>

using namespace boost::filesystem;
using namespace std;

class JsonDir{
private:
  string dir;
  directory_iterator iterator;

public:
  JsonDir(string dir){
    this->dir = dir;
    iterator = directory_iterator(dir);
  }

  void getFiles(){
    std::ofstream out("dir.json",ios::out);
    out <<"{\"files\":[\n";
    bool first = true;
    for(auto& next : iterator){
      if(!is_directory(next)){
	if(!first)
	  out << ",\n";
	out << "\t{\"name\":" << next.path() << ",\"size\":" << file_size(next) << "}";
	first = false;
      }
      
      //cout <<" "<<next.path()<<" file Size "<< file_size(next) << ",\n";
    }
    out <<"\n]}";
    out.close();
    
  }
};
