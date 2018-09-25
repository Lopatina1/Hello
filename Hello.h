#import <string>

static const char *const DEFAULT_USERNAME = "Ann";
using namespace std;

class Hello {
public:
    Hello();

    Hello(const string &username);

    string getMessage();

private:
    string username;
};