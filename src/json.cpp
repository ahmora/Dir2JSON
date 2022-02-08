#include "../lib/JsonDir.hpp"

int main(int argc, char* argv[]){
  if(argc < 2)
    cout << "Usage: listdir directory/path\n";
  else{
    JsonDir *dM = new JsonDir(argv[1]);
    dM->getFiles();
  }
  return 0;
}
