#include "../lib/JsonDir.hpp"

void usage(){
   cout << "Usage: listdir directory/path\n";
}


int main(int argc, char* argv[]){
  if(argc < 2)
    usage();
  else
    if(exists(argv[1])){
      JsonDir *dM = new JsonDir(argv[1]);
      dM->getFiles();
      return 0;
    }
  cout << "Error: directory "<< argv[1] << " not found" << endl;
  usage();
  return -1;
}
