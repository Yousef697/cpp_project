class Human {
public:
    double X, Y;
    const char* Name;

    Human();
    Human(const char* name, double x, double y);

    virtual ~Human();

    void Move(double dx, double dy);
    virtual void Info();
    virtual void GetStatus();
};

class Player : public Human {
public:
    const char* Sport;

    Player();
    Player(const char* name, double x, double y, const char* sport);
    void Info() override;
    void GetStatus() override;
};

/***
Human joe("Joe", 0, 0);
joe.Info();
joe.Move(1, 2);
std::cout << std::endl;

Player mark("Mark", 3, 5, "Football");
mark.Info();
mark.Move(-1, -2);
std::cout << std::endl;

Human* mary = new Player("Mary", 3.5, 6.25, "Chess");
mary->Info();
std::cout << std::endl;

std::cout << "Joe's status: "; joe.GetStatus();
std::cout << "Mark's status: "; mark.GetStatus();
std::cout << "Mary's status: "; mary->GetStatus();
*/
