#include <string>
using namespace std;

class Fuse {
  public:
    Fuse(int time) : _time{time} { };
    bool burn();  
    string to_string();
  private:
    int _time;
};

