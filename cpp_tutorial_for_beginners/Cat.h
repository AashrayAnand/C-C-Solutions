#ifndef CAT_H_
#define CAT_H_
#include <string>
class Cat{
private:
    std::string name;
public:
    Cat(std::string name);
    Cat();
    void jump();
};
#endif